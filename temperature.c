#include<stdio.h>

int main(){

    int temp;
    printf("enter a temperature: ");
    scanf("%d", &temp);
    if (temp>=-10 && temp<=40){
        printf("within range\n");
    } else{
        printf("invalid: not in range\n");
    }
    return 0;
}