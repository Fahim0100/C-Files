#include<stdio.h>
#include<math.h>
#include<stdbool.h>
#include<string.h>
#include<unistd.h>

int main(){

    //while loop = checks a condition, then executes a block of code if condition is true
    //do while loop = always execute a block of code once, then checks condition.
    
    int number = 0;
    int sum = 0;

    do{
        printf("Enter a number above 0: ");
        scanf("%d", &number);
        if(number>0){
            sum+=number;
        }
    }
    while(number>0);
    
    printf("sum: %d",sum);
    
    
    return 0;
    
}