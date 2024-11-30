#include<stdio.h>

void Jonny(){
    printf("\n jonny jonny!");
    printf("\n Telling lies?");
    printf("\n No Papa!");
    printf("\n Open your mouth.");
    printf("\n Hahaha!");
}

/*
int main(){
    // this way functions can be invoked. you can use repeated codes by calling function.
    Jonny();
    // you can invoke it multiple times.
    Jonny();
    Jonny();
    Jonny();

    return 0;
}
*/


/*Any thing you are passing to the function is known as Arguement.
Arguments are what you are sending to a function.

Parameters are what a function expects when it is invoked.
The benefit of Arguement and parameter is that the functions can communicate
with each other since functions can't see inside of other functions.*/

// Here's an example

void Identity(char name[], char password[], int pin){ // this is parameter.
    printf("\nYour username is '%s'.", name);
    printf("\nYour password is '*%s'.", password);
    printf("\nYour pin code is %d.", pin);
}

int main(){
    char name[] = "Starmartial";
    char password[] = "*Selfdao99";
    int pin = 278629;

    Identity(name, password, pin); // this is arguement.
    Jonny();

    return 0;


}