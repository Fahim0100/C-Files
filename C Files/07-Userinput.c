// to run the code in terminal go to
// files > preferences > settings > type 'code runner' > then "select Code-runner: Run In Terminal"

#include <stdio.h>
#include <string.h>

int main(){

    //char university[100]; //25 bytes
    //printf("\nYour University Name?");
    //fgets(university, 100, stdin); 
                                /*scanf doesn't read the gap
                                 which fgets can do. 
                                 stdin = standard input. */

    char name[10];
    printf("\nProvide you Name.");
    scanf("%s", &name);

    int age;
    printf("\nPlease enter you current age.");
    scanf("%d", &age); // & is for addressing the operator
    //getchar(); // it doesn't matter where you write it, 
                 //but it needs to be after scanf to prevent 
                 //fgets to read the leftover newline

    char university[100]; //25 bytes
    printf("\nYour University Name?");
    getchar(); //consume the leftover newline from scanf
    fgets(university, 100, stdin); 
                            /*if fgets is used after scanf
                            it will consume the leftover newline from
                            the previous scanf which will cause
                            the user to not be able to input data
                            */
    
    printf("\nName = %s", name);
    printf("\nAge = %d", age);
    printf("\nInstitution = %s", university);

    return 0;

}

