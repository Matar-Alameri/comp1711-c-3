#include<stdio.h>

int main(){

    float num;
    printf("enter a number: ");
    scanf("%f", &num);
    if(num>0){
        printf("positive number\n");
    } else if(num<0){
        printf("negative number\n");
    } else{
        printf("this is zero\n");
    }
    return 0;
}