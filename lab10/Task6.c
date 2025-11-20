#include <stdio.h>
#include <string.h>

#define MAX 50
#define SIZE 100

void printList(char arr[][SIZE], int n) {
    for(int i=0;i<n;i++)
        printf("%d. %s\n", i+1, arr[i]);
}

void saveToFile(char arr[][SIZE], int n) {
    FILE *fp = fopen("episodes.txt", "w");
    for(int i=0;i<n;i++)
        fprintf(fp, "%s\n", arr[i]);
    fclose(fp);
}

int wordCount(char *s) {
    int count = 0;
    char *p = s;
    while(*p) {
        if(*p == ' ') count++;
        p++;
    }
    return count+1;
}

int main() {
    char notes[MAX][SIZE];
    int count = 0, choice, i;
    char temp[SIZE];

    FILE *fp = fopen("episodes.txt", "r");
    while(fp && fgets(temp,SIZE,fp) && count<MAX) {
        temp[strcspn(temp,"\n")]='\0';
        strcpy(notes[count++], temp);
    }
    if(fp) fclose(fp);

    while(1) {
        printf("\n1 Add 2 Delete 3 Update 4 Search 5 Count Words 6 Exit\n");
        scanf("%d",&choice); getchar();

        if(choice==1) {
            printf("Enter note: ");
            fgets(notes[count],SIZE,stdin);
            notes[count][strlen(notes[count])-1]='\0';
            count++;
        }
        else if(choice==2) {
            printf("Delete: ");
            fgets(temp,SIZE,stdin); temp[strlen(temp)-1]='\0';

            for(i=0;i<count;i++)
                if(strcmp(notes[i],temp)==0) {
                    for(int j=i;j<count-1;j++)
                        strcpy(notes[j], notes[j+1]);
                    count--;
                    break;
                }
        }
        else if(choice==3) {
            printf("Update which: ");
            fgets(temp,SIZE,stdin);
            temp[strlen(temp)-1]='\0';

            for(i=0;i<count;i++)
                if(strcmp(notes[i],temp)==0) {
                    printf("New text: ");
                    fgets(notes[i],SIZE,stdin);
                    notes[i][strlen(notes[i])-1]='\0';
                }
        }
        else if(choice==4) {
            printf("Search: ");
            fgets(temp,SIZE,stdin);
            temp[strlen(temp)-1]='\0';
            for(i=0;i<count;i++)
                if(strstr(notes[i], temp))
                    printf("%s\n", notes[i]);
        }
        else if(choice==5) {
            printf("Enter note to count words: ");
            fgets(temp,SIZE,stdin);
            temp[strlen(temp)-1]='\0';

            for(i=0;i<count;i++)
                if(strcmp(notes[i],temp)==0)
                    printf("Words: %d\n", wordCount(notes[i]));
        }
        else if(choice==6) break;
    }

    printList(notes, count);
    saveToFile(notes, count);
    return 0;
}

