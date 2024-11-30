#include<stdio.h>

int main(){
    int points;
    printf("\nPlease enter your total Point: ");
    scanf("%d", &points);

    if(points ==10000){ //== is used for comparison
        printf("You are eligible to play in Silver");
    }
    else if(points <=1000){
        printf("You are prohibited to enter the bronze.");
    }
    else if(points >=100000){ 
        printf("You are in the Golden section.");
    }
    else{
        printf("You don't have enough points to enter Silver");
    }
    
    return 0;
}