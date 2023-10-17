#include<stdio.h>

int main(){

    float grade;
    printf("enter your grade: ");
    scanf("%f", &grade);
    if(grade>=0){
        if(grade<50){
            printf("failed\n");
        } else if(grade>=50 && grade <70){
            printf("passed\n");
        } else if(grade>=70){
            printf("distinction\n");
        }

    } else{
        printf("the grade is invalid\n");
    }
    return 0;
}