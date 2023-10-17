#include<stdio.h>

int main(){

    int op;
    printf("1.roger\n2.luffy\n3.shanks\n4.zoro\n5.sanji\n");
    printf("who is your favorite character: ");
    scanf("%d", &op);

    switch(op){

        case 1:
            printf("roger (not bad)\n");
            break;
        case 2:
            printf("luffy(the goat)\n");
            break;
        case 3:
            printf("wow shanks\n");
            break;
        case 4:
            printf("zoro the pirate hunter\n");
            break;
        case 5:
            printf("black leg sanji\n");
            break;
        default:
            printf("I said choose one of those characters\n");
    }
    return 0;
}