#include <stdio.h>

int main(){

    /*
    %d = interger;
    %u = unsigned integer;
    %lld = long long integer;
    %llu = unsigned long long interger;

    %f = float;
    %lf = double;

    %c = character;
    %s = string (array of characters);

    %.1 = decimal precision;
    %1 = minimum field width;
    %- = left allign;
    */

   float chal = 70.64;
   float dal = 120.82;
   float moida = 65.15;
   float ata = 52.59;

   printf("chal = tk %4.2f\n", chal);
   printf("dal = tk %4.2f\n", dal);
   printf("moida = tk %4.2f\n", moida);
   printf("ata = tk %4.2f\n", ata);
   

   /*constant = fixed value that can not altered by the program 
                during its execution.*/
    
    const float PI = 3.14159;

    printf("%f", PI);

   return 0;
}