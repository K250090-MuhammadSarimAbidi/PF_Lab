#include <stdio.h>
#include <string.h>

#define MAX 40
#define SIZE 100

void printList(char arr[][SIZE], int n) {
    int i;
    printf("\nFinal Recipes:\n");
    for(i=0;i<n;i++)
        printf("%d. %s\n", i+1, arr[i]);
}

void saveToFile(char arr[][SIZE], int n) {
    FILE *fp = fopen("recipes.txt", "w");
    int i;
    for(i=0;i<n;i++)
        fprintf(fp, "%s\n", arr[i]);
    fclose(fp);
}

void sort(char arr[][SIZE], int n) {
    char temp[SIZE];
    for(int i=0;i<n;i++) {
        for(int j=i+1;j<n;j++) {
            if(strcmp(arr[i], arr[j]) > 0) {
                strcpy(temp, arr[i]);
                strcpy(arr[i], arr[j]);
                strcpy(arr[j], temp);
            }
        }
    }
}

int main() {
    char recipes[MAX][SIZE];
    int count = 0, choice, i;
    char temp[SIZE];

    FILE *fp = fopen("recipes.txt", "r");
    while(fp && fgets(temp, SIZE, fp) && count < MAX) {
        temp[strcspn(temp,"\n")] = '\0';
        strcpy(recipes[count++], temp);
    }
    if(fp) fclose(fp);

    while(1) {
        printf("\n1 Add  2 Delete  3 Update  4 Search  5 Exit\n");
        scanf("%d",&choice); getchar();

        if(choice==1) {
            printf("Enter recipe: ");
            fgets(recipes[count], SIZE, stdin);
            recipes[count][strlen(recipes[count])-1]='\0';
            count++;
        }
        else if(choice==2) {
            printf("Delete: ");
            fgets(temp,SIZE,stdin);
            temp[strlen(temp)-1]='\0';

            for(i=0;i<count;i++)
                if(strcmp(recipes[i],temp)==0) {
                    for(int j=i;j<count-1;j++)
                        strcpy(recipes[j], recipes[j+1]);
                    count--;
                    break;
                }
        }
        else if(choice==3) {
            printf("Update which: ");
            fgets(temp,SIZE,stdin);
            temp[strlen(temp)-1]='\0';
            for(i=0;i<count;i++)
                if(strcmp(recipes[i],temp)==0) {
                    printf("New name: ");
                    fgets(recipes[i],SIZE,stdin);
                    recipes[i][strlen(recipes[i])-1]='\0';
                }
        }
        else if(choice==4) {
            printf("Search text: ");
            fgets(temp,SIZE,stdin);
            temp[strlen(temp)-1]='\0';

            for(i=0;i<count;i++)
                if(strstr(recipes[i], temp))
                    printf("Found: %s\n", recipes[i]);
        }
        else if(choice==5) break;
    }

    sort(recipes, count);
    printList(recipes, count);
    saveToFile(recipes, count);
    return 0;
}

