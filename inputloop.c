#include<stdio.h>

int main(){

    int num;
    printf("enter a number between 0 and 100: ");
    scanf("%d", &num);
    
    for(num>0; num>=0 && num<=100; num){

            printf("enter a number between 0 and 100: ");
            scanf("%d", &num);

    }
    
    
            printf("not in range, command terminated\n");
    
    
    return 0;
}