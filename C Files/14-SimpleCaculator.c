#include<stdio.h>
int main(){
   /*
    char operator;
    double num1;
    double num2;
    double result;

    printf("\nChoose an operator: ");
    scanf("%c", &operator);

    printf("\nEnter the number 1: ");
    scanf("%lf", &num1);

    printf("\nEnter the number 2: ");
    scanf("%lf", &num2);

    switch(operator){
        case '+':
           result = num1+num2;
           printf("\nresult = %.4lf", result);
           break; // don't forget to use 'break' to showcase only one result.
        
        case '-':
           result = num1-num2;
           printf("\nresult = %.4lf", result);
           break;
        
        case '*':
           result = num1*num2;
           printf("\nresult = %.4lf", result);
           break;
        
        case '/':
           result = num1/num2;
           printf("result = %.4lf", result);
           break;
        
        default:
           printf("\nThe operator '%c' is not valid.", operator);
    }
    */
   
   char operator;
   double num1;
   double num2;
   double result;
   
   printf("please enter the desired operator (+,-,*,/): ");
   scanf("%c", &operator);

   printf("Please enter the numbers: ");
   scanf("%lf %lf", &num1, &num2);

   switch(operator){
      case'+':
       result = num1+num2;
       printf("The result = %lf", result);
       break;
      case'-':
       result = num1-num2;
       printf("The result = %lf", result);
       break;
      case'*':
       result = num1*num2;
       printf("The result = %lf", result);
       break;
      case'/':
       if(num2!=0){
         result = num1/num2;
         printf("The result = %lf", result);
       }
       else{
         printf("Math error! Cannot be divided by zero.");
       }
       break;
       default:
         printf("The assigned operator '%c' is not valid.", operator);
       }

    return 0;
    
}