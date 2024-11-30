#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<math.h>

void identity(char[], char[], char, double);

int main(){
    /*Function Prototype
    What is it?
    ***it's a declaration of a funtion without a body, only using parameters berfore main()
    ***It ensures that calls to a function are made with correct arguements.

    Important Notes
            ***Many C compliers do not check for parameter matching
            ***missing arguements will result in unexpected behavior
            ***A function prototype causes the complier to flag error if arguement
            is missing.
    */
   char name[] = "Fahim Hossain";
   char university[] = "American International University Bangladesh";
   char grade = 'A';
   double cgpa = 3.25;

   identity(name, university, grade, cgpa);

   return 0;
}

void identity(char name[], char university[], char grade, double cgpa)
{
    printf("\nYour name is '%s'", name);
    printf("\nYou have graduated from '%s'", university);
    printf("\nYour grade is '%c'", grade);
    printf("\nYour final CGPA is '%.2lf'", cgpa);

}