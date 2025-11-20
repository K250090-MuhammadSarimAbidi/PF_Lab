#include <stdio.h>
#include <string.h>

#define MAX 10
#define SIZE 100

void printList(char arr[][SIZE], int n) {
    int i;
    printf("\nFinal Playlist:\n");
    for(i = 0; i < n; i++) {
        printf("%d. %s\n", i+1, arr[i]);
    }
}

void saveToFile(char arr[][SIZE], int n) {
    FILE *fp = fopen("playlist.txt", "w");
    int i;
    for(i = 0; i < n; i++) {
        fprintf(fp, "%s\n", arr[i]);
    }
    fclose(fp);
}

int main() {
    char songs[MAX][SIZE];
    int count = 0;
    char temp[SIZE];
    int choice, i;

    FILE *fp = fopen("playlist.txt", "r");
    while(fp && fgets(temp, SIZE, fp) && count < MAX) {
        temp[strcspn(temp, "\n")] = '\0';
        strcpy(songs[count++], temp);
    }
    if(fp) fclose(fp);

    while(1) {
        printf("\n1 Add  2 Delete  3 Update  4 Search  5 Exit\n");
        scanf("%d", &choice);
        getchar();

        if(choice == 1) {
            if(count >= MAX) { printf("Playlist full!\n"); continue; }
            printf("Enter song title: ");
            fgets(songs[count], SIZE, stdin);
            songs[count][strlen(songs[count])-1] = '\0';
            count++;
        }
        else if(choice == 2) {
            printf("Enter title to delete: ");
            fgets(temp, SIZE, stdin);
            temp[strlen(temp)-1] = '\0';

            for(i=0; i<count; i++) {
                if(strcmp(songs[i], temp) == 0) {
                    for(int j=i; j<count-1; j++)
                        strcpy(songs[j], songs[j+1]);
                    count--;
                    break;
                }
            }
        }
        else if(choice == 3) {
            printf("Enter title to update: ");
            fgets(temp, SIZE, stdin);
            temp[strlen(temp)-1] = '\0';

            for(i=0; i<count; i++) {
                if(strcmp(songs[i], temp) == 0) {
                    printf("Enter new title: ");
                    fgets(songs[i], SIZE, stdin);
                    songs[i][strlen(songs[i])-1] = '\0';
                    break;
                }
            }
        }
        else if(choice == 4) {
            printf("Search title: ");
            fgets(temp, SIZE, stdin);
            temp[strlen(temp)-1] = '\0';

            for(i=0; i<count; i++) {
                if(strcmp(songs[i], temp) == 0) {
                    printf("Found at position %d\n", i+1);
                }
            }
        }
        else if(choice == 5) {
            break;
        }
    }

    printList(songs, count);
    saveToFile(songs, count);

    return 0;
}

