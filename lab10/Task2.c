#include <stdio.h>
#include <string.h>

#define MAX 20
#define SIZE 100

void printList(char arr[][SIZE], int n) {
    int i;
    printf("\nFinal Levels:\n");
    for(i = 0; i < n; i++)
        printf("%d. %s\n", i+1, arr[i]);
}

void saveToFile(char arr[][SIZE], int n) {
    FILE *fp = fopen("levels.txt", "w");
    int i;
    for(i = 0; i < n; i++)
        fprintf(fp, "%s\n", arr[i]);
    fclose(fp);
}

int main() {
    char levels[MAX][SIZE];
    int count = 0, choice, i;
    char temp[SIZE];

    FILE *fp = fopen("levels.txt", "r");
    while(fp && fgets(temp, SIZE, fp) && count < MAX) {
        temp[strcspn(temp, "\n")] = '\0';
        strcpy(levels[count++], temp);
    }
    if(fp) fclose(fp);

    while(1) {
        printf("\n1 Add  2 Delete  3 Update  4 Search  5 Exit\n");
        scanf("%d", &choice); getchar();

        if(choice == 1) {
            if(count >= MAX) continue;
            printf("Enter level description: ");
            fgets(levels[count], SIZE, stdin);
            levels[count][strlen(levels[count])-1] = '\0';
            count++;
        }
        else if(choice == 2) {
            printf("Enter level to delete: ");
            fgets(temp, SIZE, stdin);
            temp[strlen(temp)-1] = '\0';

            for(i=0;i<count;i++) {
                if(strcmp(levels[i], temp)==0) {
                    for(int j=i;j<count-1;j++)
                        strcpy(levels[j], levels[j+1]);
                    count--;
                    break;
                }
            }
        }
        else if(choice == 3) {
            printf("Enter level to update: ");
            fgets(temp, SIZE, stdin);
            temp[strlen(temp)-1] = '\0';

            for(i=0;i<count;i++) {
                if(strcmp(levels[i], temp)==0) {
                    printf("Enter new description: ");
                    fgets(levels[i], SIZE, stdin);
                    levels[i][strlen(levels[i])-1] = '\0';
                }
            }
        }
        else if(choice == 4) {
            printf("Search: ");
            fgets(temp, SIZE, stdin); temp[strlen(temp)-1]='\0';
            for(i=0;i<count;i++)
                if(strcmp(levels[i], temp)==0)
                    printf("Found at %d\n", i+1);
        }
        else if(choice == 5) break;
    }

    printList(levels, count);
    saveToFile(levels, count);
    return 0;
}

