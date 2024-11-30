#include<stdio.h>

int main(){
    int A;

    printf("Please Enter the current number: ");
    scanf("%d", &A);

    if(A == 10000){
        printf("\nYou have got the Bronze Button");
    }
    else if(A<10000){
        printf("\nYou are %d subscriber away from the Bronze Play button", 10000-A);
    }
    else{
        printf("\n ");
    }

    if(A == 100000){
        printf("\nYou are now the owner of Silver Play button");
    }
    else if(A<100000){
        printf("\nYou are %d subscriber away from the Silver Play button", 100000-A);
    }
    else{
        printf("\n ");
    }

    if(A == 1000000){
        printf("\nYou have the Gold Play button");
    }
    else if(A>=900000){
        printf("\nYOU CAN DO IT! You are only %d subscribers away to reach a million", 1000000-A);
    }
    else if(A>100000){
        printf("\nYou are %d subscriber away from the Gold Play button", 1000000-A);
    }
    else{
        printf("\n ");
    }

    return 0;
}