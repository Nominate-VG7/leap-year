#include <stdio.h>

int main()
{
    int n;
    printf("enter a year: ");
    scanf("%d", &n);

    if(n%4==0){
        if(n%100==0){
            if(n%400==0){
                printf("leap year\n");
            }
            else{
                printf("not a leap year\n");
            }
        }
        else{
            printf("leap year\n");
            }
    }
    else{
        printf("not a leap year\n");
    }
}