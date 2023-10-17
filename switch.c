#include<stdio.h>

int main(){

    int a;
    printf("choose an option: ");
    scanf("%d", &a);
    switch(a){
        case 0: 
            printf("option 0 has been selected\n");
            break;
        case 1: 
            printf("option 1 has been selected\n");
            break;
        default :
            printf("invalid selection\n");
    }
    return 0;
}
