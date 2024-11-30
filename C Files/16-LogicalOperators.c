#include<stdio.h>
#include<stdbool.h>

int main(){

    // logical operators = && (AND) checks if two or more conditions are true
    float temp = 25;
    bool sunny = false;
    
    if(temp >= 0 && temp<=35 && sunny){ // all the conditions needs to be true.
        printf("\nThe weather is good.");
    }
    else{printf("\nThe weather is bad.");}

    //logical operators = || (OR) checks if at least one condition is true.
    // for me this OR || operator is more like addition.

    float celcius = 33;

    if(celcius <=0 || celcius >= 35 || celcius==33 ){printf("\nThe weather is bad!");}
    else{printf("\nThe weather is good!");}
    // OR || operator is more like (0+0+0+0+1 = 1).


    // Logical Operator = ! (NOT) reverses the state of a condition.
    // if it's 0 then the not ! operator will reverse 0 to 1.
    //there are multiple ways of writing this if statement.
//1.
    if (sunny != 1){printf("\nIt's bright outside!");}
    else{printf("\nIt's cloudy outside!");}
//2.   
    if (!sunny == 1){printf("\nIt's bright outside!");}
    else{printf("\nIt's cloudy outside!");}
//3.
    if (!sunny){printf("\nIt's bright outside!");}
    else{printf("\nIt's cloudy outside!");}

    return 0;
}