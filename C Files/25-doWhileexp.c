#include<stdio.h>
#include<math.h>
#include<stdbool.h>
#include<string.h>
#include<unistd.h>
#include<time.h> // for time()
#include<stdlib.h> // for rand() and srand()

int main(){

///1. Write a C program to print numbers from 1 to 10 and 10 to 1 using a do-while loop.
    
    int i = 1;
    printf("Number from 1 to 10;\n");
    do{
        printf("%d\t", i);
        i++;
    }while(i<=10);
    

    i = 10;
    printf("\n\nNumber from 10 to 1;\n");
    do{
        printf("%d\t", i);
        i--;
    } while(i>=1);


////////////////////////////////////////////////////////////////////////////////////

/*2.Write a C program that prompts the user to input a series of integers 
until the user stops by entering 0 using a do-while loop.
Calculate and print the sum of all positive integers entered.
*/
    int number;
    int sum = 0;
    
    do{
        printf("\nInput a number above 0: ");
        scanf("%d", &number);
        if(number>0){
            sum += number;
        }
        else if(number<0){printf("Negetive Integer is not considered!\n");}
    }
    while(number>0);
    printf("%d", sum);


////////////////////////////////////////////////////////////////////////////////////////

printf("\n");


///////////////////////////////////////////////////////////////////////////////////////


/***3.Write a C program that calculates the sum of even and odd numbers from 1 to 50 using
do-while loops.*/

    int ip = 0;
    int even = 0;
    int odd = 0;

    do{
        even += ip;
        ip+=2;
    } while(ip<=50);
    printf("THe sum of even numbers from 1 to 50 is %d\n", even);

    ip = 1;
    do{
        odd += ip;
        ip+=2;
    } while(ip<=50);
    printf("The sum of odd numbers from 1 to 50 is %d\n", odd);

////// ANOTHER WAY OF THIS-------

    int en = 0;
    int even_sum = 0;
    int odd_sum = 0;
    do{
        int per = en%2;
        if(per == 0){
            even_sum += en;
            en++;
        }
        else{
            odd_sum += en;
            en++;
        }
    }while(en<=50);
    printf("The sum of evens from 1 to 50 is %d\n", even_sum);
    printf("The sum of odds from 1 to 50 is %d\n", odd_sum);


//////////////////////////////////////////////////////////////////////////////////////
printf("\n");
/////////////////////////////////////////////////////////////////////////////////////

/***4.Write a C program that promts the user to enter a series of numbers until they input
a negetive number. Calculate and print the sum of all entered numbers using do-while
loop.*/



        int pos_num;
    int pos_sum = 0;
    do{
        printf("Enter a Positive integer number:");
        scanf("%d", &pos_num);
        if(pos_num >= 0){
            pos_sum += pos_num;
        }
    }while(pos_num >= 0);
    printf("Sum is %d", pos_sum);


//////////////////////////////////////////////////////////////////////////////////////
printf("\n");
/////////////////////////////////////////////////////////////////////////////////////

/***5.Write a C program that generates a random number between 1 and 100 and asks 
the user to guess it. Use a do-while loop to give the user multiple chances until they
guess the correct number. */

    srand(time(NULL)); // seed the random number generator
    int r = rand()%100+1; // random number between 1 and 100
    int guess;

    do{
        printf("Please give the guessed number:");
        scanf("%d", &guess);
        if(r!=guess){
            printf("Sorry! Wrong. Please try again.\n");
            printf("Correct answer is %d\n", r);
        }
    } while(r!=guess);

    printf("You have guessed the correct number.\n");
    printf("The Guessed number is '%d'.\n", r);

/*SOME IMPROTANT NOTE:
***Include the time.h library:

This library provides the time() function, which returns the current time 
in seconds since a fixed starting point (the Unix epoch).


***Set the Seed with srand():

Call srand(time(NULL)); once at the beginning of your program. 
This initializes the random number generator with the current time.


***Generate Random Numbers:

After seeding, you can use rand() to get different numbers each time you run the program.
*/



//////////////////////////////////////////////////////////////////////////////////////
printf("\n");
//////////////////////////////////////////////////////////////////////////////////////

/***6. Write a C program that prompts the user to enter a positive integer and then 
 calculates and prints the sum of the squares of each digit in that number using 
 a do-while loop.
*/

    int input;
    int digit_sum;

    printf("Please enter a positive Integer of multiple Digits: ");
    scanf("%d", &input);

    do{
        int last_digit = input%10;
        last_digit = last_digit*last_digit;
        digit_sum += last_digit;
        input /=10;
    } while(input!=0);

    printf("The sum of the all squared digits is %d", digit_sum);
    

//////////////////////////////////////////////////////////////////////////////////////
printf("\n");
//////////////////////////////////////////////////////////////////////////////////////

/***7. Write a C program that calculates the average of a set of numbers input 
 by the user. The user should be able to input as many numbers as desired, and 
 the program should continue until the user decides to stop.
 */

/// THe code I wrote -----

    int num3;
    int avgsum = 0;
    int count = 0;
    double average;

    do{
        printf("Enter the number (To quit enter 0): ");
        scanf("%d", &num3);
        if(num3 != 0){
                avgsum += num3;
                count++;
        }
    } while(num3!=0);
    
    if(count>0){
        average = avgsum/count;
        printf("The average of all the inputs you have entered is %lf", average);
    }
    else{printf("No number were entered.");}

/////
///// THE CODE I WAS SUGGESTED.
///// THE CODE I WAS SUGGESTED.
///// THE CODE I WAS SUGGESTED.

    int num3;
    int avgsum = 0;
    int count = 0;
    double average;
    printf("Enter the numbers one by one (TO quit enter a non numeric value): ");

    while(1){
        printf("Enter a number: ");
        if(scanf("%d", &num3) != 1){  /// Detect a non numeric value
            break; // Exit the loop if input is invalid
        }
        if(num3 != 0){ // Add to sum and count only if not zero
            avgsum += num3;
            count++;
        }
    }

    if(count>0){
        average = (double)avgsum / count;
        printf("The average of all the inputs you have entered is %.2lf\n", average);
    }
    else{printf("No numbers were entered!\n");}


/*
    int num3;
    int avgsum = 0;
    int count = 0;
    double average;
    printf("Enter the numbers one by one (TO quit enter a non numeric value)\n\n");

    do{
        printf("Enter a number: ");
        if(scanf("%d", &num3) != 1){  /// Detect a non numeric value
            break; // Exit the loop if input is invalid
        }
        if(num3 != 0){ // Add to sum and count only if not zero
            avgsum += num3;
            count++;
        }
    } while(1);

    if(count>0){
        average = (double)avgsum / count;
        printf("The average of all the inputs you have entered is %.2lf\n", average);
    }
    else{printf("No numbers were entered!\n");}
*/



//////////////////////////////////////////////////////////////////////////////////////
printf("\n");
//////////////////////////////////////////////////////////////////////////////////////


/*8. Write a C program that prompts the user to enter a password. 
Use a do-while loop to keep asking for the password until the correct one is entered.
*/


    char password1[] = "DarkKnight";
    char password2[10];
    
    do{
        printf("Please enter the password to login.\n");
        scanf("%s", &password2);

        if(strcmp(password1,password2) != 0) // to compare strings you need to use strcmp
        {
            printf("Wrong Password. Please try again.\n");
        }
    }while(strcmp(password1,password2) != 0);

    printf("You have logged in.\n");

//// Another way
//// Another way
//// Another way

    char password1[] = "DarkKnight"; // Correct password
    char password2[20];            // User input buffer

    do {
        printf("Please enter the password to login:\n");
        fgets(password2, 20, stdin);  // Read user input

        // Remove newline character only if it exists
        size_t len = strlen(password2);
        if (len > 0 && password2[len - 1] == '\n') {
            password2[len - 1] = '\0'; // Replace newline with null terminator
        }

        // Compare the input with the correct password
        if (strcmp(password1, password2) != 0) {
            printf("Wrong Password. Please try again.\n");
        }
    } while (strcmp(password1, password2) != 0); // Loop until correct password

    printf("You have logged in.\n");



//////////////////////////////////////////////////////////////////////////////////////
printf("\n");
//////////////////////////////////////////////////////////////////////////////////////


/***9. Write a C program that calculates the compound interest for a given principal 
amount, interest rate, and time period. Use a do-while loop to allow the user 
to input values multiple times.
*/

    double A, P, r, t;
    int exit;
    
    do{
        printf("PLease enter the values of P(principle), r(rate) and t(in years): ");
        scanf("%lf %lf %lf", &P, &r, &t);

        if(P<=0 || r<=0 || t<=0){
            printf("Invalid input. Please enter postive value.\n");
            continue;
        }

        r/=100;
        double q = 1+r;
        q = pow(q, t);
        A = P*q;
        printf("The final amount is %lf.\n", A);

        //int exit;
        //printf("To exit, please press 0.");
        //scanf("%d", &exit);
        //if(exit == 0){break;}

        printf("Want to calculate compound interest again? (1 for Yes, 0 for No): ");
        scanf("%d", &exit);


    }while(exit == 1);

    printf("You have exited from the program.");



/////////////////////////////////////////////////////////////////////////////////////
printf("\n");
////////////////////////////////////////////////////////////////////////////////////

/*10.Write a C program to reverse a given number using a do-while loop.*/
    

    int given_input;
    int reversed = 0;
    printf("Enter a multi digit number to reverse.\n");
    scanf("%d", &given_input);

    do{
        int end = given_input%10;
        reversed = reversed*10+end;
        given_input/=10;
    }while(given_input != 0);

    printf("The reversed number is %d", reversed);

// Nested Loop = Loop inside another loop;
// Nested Loop = Loop inside another loop;
// Nested Loop = Loop inside another loop;
// Nested Loop = Loop inside another loop;

    char emoji[4];

    printf("Please a character: ");
    scanf("%s", emoji);
    
    for(int i = 1; i<=10; i++)
    {
        for(int j = 1; j<=11-i; j++)
        {
            printf("%s", emoji);
        }
        printf("\n");
    }
    return 0;
    
}