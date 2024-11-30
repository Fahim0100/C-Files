#include <stdio.h>

int main(){
    /*
    Variable = Allocated spacein memory to store a value.
               A variable's name is refered to access the
               stored value. The variable behaves as if it
               contains the value. We need to declare what
               type of data we have stored.
    */

   int x; // I declared the variable
   x = 160; // I initialized the value, %d
   int y = 10;// I declared and initialized both the variable and value

   char Name[] = "Fahim Hossain"; // array of character, %s
   char University [] = "American International University";
   char Department [] = "Electrical and Electronics Engineering";
   char grade = 'A'; // will be a single character, %c
   float gpa = 3.25; // floating point number, %f

   printf("Hi, I am %s.\n", Name);
   printf("I have graduated in %s.\n", Department);
   printf("The name of my instiution is %s.\n", University);
   printf("I have completed a total of %d credits\t", x);
   printf("with extra %d credits.\n", y);
   printf("My final grade is %c.\n", grade);
   printf("My CGPA is %f.\n", gpa);

   return 0;

}