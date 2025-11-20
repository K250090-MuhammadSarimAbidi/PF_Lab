#include <stdio.h>
#include <string.h>

#define MAX 40
#define SIZE 100

void printList(char arr[][SIZE], int n) {
    for(int i=0;i<n;i++)
        printf("%d. %s\n", i+1, arr[i]);
}

void saveToFile(char arr[][SIZE], int n) {
    FILE *fp = fopen("affirm.txt", "w");
    for(int i=0;i<n;i++)
        fprintf(fp, "%s\n", arr[i]);
    fclose(fp);
}

int main() {
    char list[MAX][SIZE];
    int count = 0, choice, i;
    char temp[SIZE];

    FILE *fp = fopen("affirm.txt", "r");
    while(fp && fgets(temp,SIZE,fp) && count<MAX) {
        temp[strcspn(temp,"\n")]='\0';
        strcpy(list[count++], temp);
    }
    if(fp) fclose(fp);

    while(1) {
        printf("\n1 Add 2 Delete 3 Update 4 Search 5 Exit\n");
        scanf("%d",&choice); getchar();

        if(choice==1) {
            printf("Enter affirmation: ");
            fgets(list[count],SIZE,stdin);
            list[count][strlen(list[count])-1]='\0';
            count++;
        }
        else if(choice==2) {
            printf("Delete which: ");
            fgets(temp,SIZE,stdin); temp[strlen(temp)-1]='\0';
            for(i=0;i<count;i++)
                if(strcmp(list[i],temp)==0) {
                    for(int j=i;j<count-1;j++)
                        strcpy(list[j], list[j+1]);
                    count--;
                    break;
                }
        }
        else if(choice==3) {
            printf("Update which: ");
            fgets(temp,SIZE,stdin); temp[strlen(temp)-1]='\0';
            for(i=0;i<count;i++)
                if(strcmp(list[i],temp)==0) {
                    printf("New text: ");
                    fgets(list[i],SIZE,stdin);
                    list[i][strlen(list[i])-1]='\0';
                }
        }
        else if(choice==4) {
            printf("Search text: ");
            fgets(temp,SIZE,stdin); temp[strlen(temp)-1]='\0';
            for(i=0;i<count;i++)
                if(strstr(list[i], temp))
                    printf("%s\n", list[i]);
        }
        else if(choice==5) break;
    }

    printList(list, count);
    saveToFile(list, count);
    return 0;
}

