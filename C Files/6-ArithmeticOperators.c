#include <stdio.h>

int main(){

    /* +  addition
       -  subtraction
       *  multiplication
       /  division
       %  modulus
       ++ increment
       -- decrement
       */
    
    int x = 8;
    int y = 5;
    
    float z = x / (float)y; //in division convert the lower part into float 
                         // to get a floating number

    printf("%.2f\n", z); // .2 is used to get only two fraction numbers

    int q = x % y;

    printf("%d\n", q);

    x++;
    y--;

    printf("%d\n",x);
    printf("%d\n",y);

    /*
    Augmented assignment Operators is generally used to replace 
    a statement where an operator takes a variable as one of its 
    arguments and then assigns the result back to the same variable.
    
    example, x = x+1
             x+=1
    */

   //x = x+2;
   //x+=2; // 11 is becuause of line 26
   //x = x-2;
   //x-=2; 
   //x = x*2;
   //x*=2;
   //x = x/2;
   //x/=2;
   //x = x%2;
   x%=2;
   printf("%d",x); 

    return 0;
}