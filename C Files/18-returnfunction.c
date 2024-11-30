// return = returns a value back to a calling function

#include<stdio.h>
#include<string.h>

double square(double a){   // here instead of void, we will write double since the result is in double.
    //double result = a*a;
    //return result;
    //or we can write it in this way
    return a*a;
}

int volume(int h, int w, int l){
    int result = h*l*w;
    return result;
    // or,
    //return h*l*w;
}

int addition(int c){
    return c+c;
}

int main(){
    
    double a = square(9.15);
    printf("%lf", a);

    int h, l, w;
    printf("\nPlease input the height, length and the width: ");
    scanf("%d %d %d", &h, &l, &w);

    int b = volume (h,l,w);
    printf("The volume is %d", b);

    int c = addition(9);
    printf("\n%d", c);

    return 0;
}