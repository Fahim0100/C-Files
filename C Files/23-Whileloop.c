#include<stdio.h>
#include<math.h>
#include<stdbool.h>
#include<string.h>
#include<ctype.h>
#include<unistd.h>
#include<time.h>

int main(){
    //while loop = repeats a section of code possibly unlimited times.
    //while some condition remains true
    //a while loop might not execute at all
    /*
    char name[25];
    printf("\nWhat's your name?: ");
    fgets(name, 25, stdin);
    name[strlen(name)-1] = '\0';

    while(strlen(name) == 0)
    {
        printf("\nYou didn't enter the name.");
        printf("\nWhat's your name?: ");
        fgets(name, 25, stdin);
        name[strlen(name)-1] = '\0';
    }
    printf("\nHi,%s. You can proceed to the next stage.", name);
    */
    
/////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////

/*
1. Number Guessing Game
Objective: Create a game where the user has to guess 
a random number within a certain range (like 1 to 10).

How it works: Use a while loop to keep the game running until the user guesses correctly.
Each time the user guesses wrong, give a hint if the guess was too high or too low.

Learning focus: Practicing condition checking and updating based on user input.
*/

    int number = 56;
    int guess;
    printf("\nplease enter the number:");
    scanf("%d", &guess);

    while(guess != number){
        if(guess>=0 && guess<=45){
            printf("\nThe input is too low.");
            printf("\nplease enter the number:");
            scanf("%d", &guess);
            }
        else if(guess>=65 && guess<=100){
            printf("\nThe input is too high.");
            printf("\nplease enter the number:");
            scanf("%d", &guess);
        }
        else if(guess>45 && guess<=55){
            printf("\nYou are soo close. Go a bit higher.");
            printf("\nplease enter the number:");
            scanf("%d", &guess);
        }
        else if(guess>=57 && guess<=64){
            printf("\nYou are soo close. Go a bit lower.");
            printf("\nplease enter the number:");
            scanf("%d", &guess);
        }
        else{
            printf("Please enter a number ranged from 0 to 100.");
            printf("\nplease enter the number:");
            scanf("%d", &guess);
            }
    }
    printf("\nCOngratulation! You have guessed the correct number %d.", guess);

// another way and clean.
/*
    printf("\nPlease enter a number between 0 and 100:");
    scanf("%d", &guess);

    while (guess != number) {
        if (guess < 0 || guess > 100) {
            printf("\nPlease enter a number in the range of 0 to 100.");
        } else if (guess < 45) {
            printf("\nThe input is too low.");
        } else if (guess > 65) {
            printf("\nThe input is too high.");
        } else if (guess >= 45 && guess <= 55) {
            printf("\nYou are so close! Go a bit higher.");
        } else if (guess >= 57 && guess <= 64) {
            printf("\nYou are so close! Go a bit lower.");
        }
        
        // Ask for input again at the end of the loop
        printf("\nPlease enter the number:");
        scanf("%d", &guess);
    }

    printf("\nCongratulations! You guessed the correct number: %d\n", guess);
*/

//////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////

/*
2. Countdown Timer
Objective: Create a countdown timer that starts from a user-specified number and 
counts down to zero.

How it works: Use a while loop to print the numbers as they count down. 
You could even make it a little interactive by adding a small delay (like one second) 
between each number to simulate a real timer.

Learning focus: Reinforcing loop conditions and experimenting with time delays.
*/

    int countdown;
    printf("\nPlease input a number: ");
    scanf("%d", &countdown);
    while(countdown!=0)
    {
        printf("\n%d", countdown);
        sleep(1); //#include<unistd.h> for sleep() function
        countdown--;

    }
    printf("\nTime's UP!");

////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////
/*
3. Basic Text Menu
Objective: Build a simple menu that presents the user with options 
(like "1. Start," "2. Settings," "3. Quit").

How it works: Use a while loop to keep showing the menu until the user selects "Quit." 
Allow the user to choose different options and display a message based on their selection.

Learning focus: Practicing user interaction and repetition with a loop.
*/

    int input;
    char confirmation;
    printf("\nMenu\n1.Start\n2.Settings\n3.Quit\n\nTo select the option, please input a number: ");
    scanf("%d", &input);

    while(input != 3)
    {
        printf("\nMenu\n1.Start\n2.Settings\n3.Quit\n\nTo select the option, please input a number: ");
        scanf("%d", &input);
    }

    printf("\nAre you sure you want to quit? Y/N\n");

    while((getchar()) != '\n'); // clear any remaining newline character

    scanf("%c", &confirmation); // Use " %c" to ignore any leading whitespace

    while(confirmation != 'y' && confirmation != 'Y')
    {
        printf("\nMenu\n1.Start\n2.Settings\n3.Quit\n\nTo select the option, please input a number: ");
        scanf("%d", &input);

        if(input == 3){
            printf("\nAre you sure you want to quit? Y/N\n");

            while((getchar()) != '\n'); // clear any remaining newline character

            scanf("%c", &confirmation); // Use " %c" to ignore any leading whitespace
        }
        
    }
    printf("\nYou are logging out in...");

    int time = 5;
    for(; time!=0; time--)
    {
        printf("\n%d", time);
        sleep(1);
    }
    printf("You have successfully logged out!");
    
   
    return 0;
}