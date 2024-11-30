//switch is a more efficient way alternative to "else if" statement
// which allows a value to be tested for equality against many cases

#include<stdio.h>

int main(){
    char Grade;
    printf("\n enter the letter: ");
    scanf("%c", &Grade);

    switch(Grade){
        case 'A':
        printf("Excellent!\n");
        break;
        case 'B':
        printf("Great.\n");
        break;
        case 'C':
        printf("Average.\n");
        break;
        case 'D':
        printf("Very Bad.\n");
        break;
        case 'F':
        printf("Failed!\n");
        break;
        default:
        printf("Please Assign the Valid grade.\nA");
    }

    return 0;
}