#include <stdio.h>
#include <string.h>

#define MAX 40
#define SIZE 100

void printList(char arr[][SIZE], int n) {
    for(int i=0;i<n;i++)
        printf("%d. %s\n", i+1, arr[i]);
}

void saveToFile(char arr[][SIZE], int n) {
    FILE *fp = fopen("tags.txt", "w");
    for(int i=0;i<n;i++)
        fprintf(fp, "%s\n", arr[i]);
    fclose(fp);
}

int contains(char *text, char *part) {
    return strstr(text, part) != NULL;
}

int main() {
    char tags[MAX][SIZE];
    int count = 0, choice, i;
    char temp[SIZE];

    FILE *fp = fopen("tags.txt", "r");
    while(fp && fgets(temp,SIZE,fp) && count<MAX) {
        temp[strcspn(temp,"\n")]='\0';
        strcpy(tags[count++], temp);
    }
    if(fp) fclose(fp);

    while(1) {
        printf("\n1 Add 2 Delete 3 Update 4 Search 5 Exit\n");
        scanf("%d",&choice); getchar();

        if(choice==1) {
            printf("Enter tag: ");
            fgets(tags[count],SIZE,stdin);
            tags[count][strlen(tags[count])-1]='\0';
            count++;
        }
        else if(choice==2) {
            printf("Delete: ");
            fgets(temp,SIZE,stdin);
            temp[strlen(temp)-1]='\0';

            for(i=0;i<count;i++)
                if(strcmp(tags[i],temp)==0) {
                    for(int j=i;j<count-1;j++)
                        strcpy(tags[j], tags[j+1]);
                    count--;
                    break;
                }
        }
        else if(choice==3) {
            printf("Update which: ");
            fgets(temp,SIZE,stdin); temp[strlen(temp)-1]='\0';
            for(i=0;i<count;i++)
                if(strcmp(tags[i],temp)==0) {
                    printf("New tag: ");
                    fgets(tags[i],SIZE,stdin);
                    tags[i][strlen(tags[i])-1]='\0';
                }
        }
        else if(choice==4) {
            printf("Search text: ");
            fgets(temp,SIZE,stdin); temp[strlen(temp)-1]='\0';
            for(i=0;i<count;i++)
                if(contains(tags[i], temp))
                    printf("%s\n", tags[i]);
        }
        else if(choice==5) break;
    }

    printList(tags, count);
    saveToFile(tags, count);
    return 0;
}

