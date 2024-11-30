#include <stdio.h>

#include <string.h>

 

int main(){

    char string1[] = "Absolute";
    char string2[] = "Burst";

    //strlwr(string1); // converts a string to lowercase letter.
    //strupr(string1); //converts a string to uppercase letter.
    //strcat(string1, string2); //attaches/appends string2 to the end of string1.
    //strncat(string1, string2, 1); // appends 'n' characters from string2 to string 1.
    //strncat(string1,string2, 5);
    //strcpy(string1,string2); // copy string2 to string1.
    //strncpy(string1, string2,3); // copy 'n' characters of string2 to string1.
    
    //strset(string1,'*'); // sets all the characters of a string to a give character.
    //strnset(string1, '*',2); //sets the first 'n' characters of a string to a given character.
    //strrev(string2);
    //strrev(string1); //reverses a string

    
    //printf("%s", string1);


    //int result = strlen(string1); // returns string length as int numbers
    //int result = strcmp(string1, string2); // string compare all characters
    //int result = strncmp(string1, string2, 2); // string compare n characters
    //int result = strcmpi(string1, string2); // string compare all ( ignore cases)
    int result = strnicmp(string1, string2, 2); // string compare n characters ( ignore cases)

    //printf("%d", result);


   

   if(result == 0)

   {

      printf("These strings are the same");

   }

   else

   {

      printf("These strings are not the same");

   }

   return 0;

}