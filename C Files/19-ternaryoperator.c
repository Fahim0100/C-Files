#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<math.h>

int findmax(int x, int y){
    /*
    if(x>y){return x;}
    else{return y;}
    */
   //The easy way to write is this long code by using ternary operator

    return (x>y) ? x : y;
}

int main(){

    // ternary operator = shortcut to if/else when assigning/returning avalue
    // (Condition) ? value if true : value if false


    int max = findmax(12,4);
    printf("%d", max);

    return 0;
}