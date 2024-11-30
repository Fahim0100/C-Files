#include<stdio.h>
#include<math.h>
#include<stdbool.h>
#include<string.h>

//forloop = repeats a section of code a limited amount of times

/*
int main(){
    int x,y;
    
    for(int x = 1; x<=10; x+=2){
        y = x+1;
        int z = pow(x,2) + 2*x*y + pow(y,2);
        printf("z = %d\n", z);
    }

    return 0;
}
*/


int calculated(int x, int y){
    int result = x*x + 2*x*y + y*y;
    return result;
}

int main(){
    int x,y;
    
    for(int x = 15; x>=1; x-=2){
        y = x+1;
        int z = calculated(x,y);
        printf("z = %d\n", z);
    }
    for(int i=1; i<=10; i++){
        printf("Happy Birthday to you!\n");
    }
    for(int p=1; p<=100; p++){
        printf("%d\n",p);
    }
    for(int q=2; q<=50; q+=2){
        printf("%d\n",q);
    }
//Sum of First 10 Natural Numbers:
//Write a for loop to find the sum of the first 10 natural numbers 
//(i.e., 1, 2, 3, ..., 10).

    int sum = 0;
    for(int a = 0; a <= 10; a++){
        sum += a;
    }
    printf("\nsum is %d\n", sum);

    int factorial = 1;
    for(int b = 1; b <= 5; b++){
        factorial *= b;
    }
    printf("\nFactorial is %d\n", factorial);

/*
Use a for loop to print the following pattern:
  *
  **
  ***
  ****
  *****
*/

    for(int c = 1; c <= 5; c++){
        for(int j=1; j<=c; j++){
            printf("*");
        }
        printf("\n");
    }
    
    
    
    int reversed = 0;
    for(int input = 1234;input!= 0; input/=10){
        int last_digit = input%10;
        reversed = reversed*10+last_digit;
    }
    printf("The reversed number is %d", reversed);

//***Write a for loop that finds the sum of all even numbers and 
//the sum of all odd numbers between 1 and 50.
    int even_sum = 0;
    int odd_sum = 0;
    for(int e = 1; e<=50; e++)
    {
        if(e%2 == 0){even_sum += e;}
        else{odd_sum += e;}  
    }
    printf("\nThe sum of even numbers: %d", even_sum);
    printf("\nThe sum of odd numbers: %d", odd_sum);


/****Write a for loop to generate and print the first n numbers in the Fibonacci series. 
The Fibonacci sequence starts with 0, 1, and each subsequent number is the sum of the 
previous two.*/


//code no 1 ------
//incorrect code which compiles the correct answers but does not follow the
//fabinacco rule.
/*
    int fibonacci_series = 0;
    for(int f=1; f<=100; f = fibonacci_series - f) //it will print the correct answer but 
    // it doesn't follow the fibonacci rule.
    {
        fibonacci_series = fibonacci_series + f;
        printf("\n%d", fibonacci_series);
    }
*/
 
 // code no 2 ------
    int first = 0; 
    int second = 1;
    int fabinacco = 0;

    printf("%d\n", first);  // Print the first number of the Fibonacci series (0)
    printf("%d\n", second); // Print the second number of the Fibonacci series (1)

    for(int i = 3; i<=20; i++)
    {
        fabinacco = first+second;
        printf("%d\n", fabinacco);
        first = second;
        second = fabinacco;
    }
/***Write a for loop to count the number of digits in a given number.
    For example, if the number is 12345, the output should be 5.*/
    
    int i_p; //input
    printf("Enter the number: ");
    scanf("%d", &i_p);
    
    int total_digit =0;
    for(;i_p !=0; i_p/=10)
    {
        total_digit ++;
    }
    printf("%d", total_digit);

    return 0;
}
