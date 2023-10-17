#include<stdio.h>

int main(){

    float temp;
    printf("what is the temperature today ");
    scanf("%f", &temp);
    if (temp>10)
        printf("wear a jumper.\n");

    else if (temp>20)
        printf("no need for a jacket\n");
    else
        printf("wear a heavy jacket.\n");
        
    return 0;

}