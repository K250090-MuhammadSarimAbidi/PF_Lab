#include <stdio.h>
void event_countdown(int n){
    if(n==0){
        printf("%d\n",n);
    }
    else{
        printf("%d\n",n);
        event_countdown(n-1);
    }
}

int main(){
    int flag = 1;
    int x;
    int n;
    char event_name[100];
    while(flag){
        printf("1:Input Event\n");
        printf("2:Exit program\n");
        scanf("%d",&x);
        switch(x){
            case 1:
                printf("Enter the event Name: ");
                scanf("%s",event_name);
                printf("Enter the number of days: ");
                scanf("%d",&n);
                event_countdown(n);
                break;
            case 2:
                flag = 0;
                printf("Program successfully exited..\n");
                break;
            default:
                printf("Enter the correct number.\n");
                break;
        }
    }
}
