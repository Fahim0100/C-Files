#include <stdio.h>
#include <math.h>

int main(){

    const double PI = 3.14159;
    double radius;
    double area;
    double circumference;

    printf("Enter the value of Radius: ");
    scanf("%lf", &radius);

    circumference = 2 * PI * radius; // write equation after the user assigned value
    area = PI * pow(radius,2);

    printf("The area is %lf cm.\n", area);
    printf("The circumference is %lf cm\n", circumference);


    double length;
    double width;
    double height;
    double volume;
    double mass;
    double density;

    printf("Please enter the Length: ");
    scanf("%lf", &length);

    printf("Now enter the width: ");
    scanf("%lf", &width);

    printf("Enter the Hight: ");
    scanf("%lf", &height);

    printf("Finally enter the Mass: ");
    scanf("%lf", &mass);

    volume = length * width * height;
    density = volume * mass;

    printf("The Volume is %lf", volume);
    printf("\nThe density is %lf", density);


    double A;
    double B;
    double C;

    printf("\nEnter the side A: ");
    scanf("%lf", &A);

    printf("Enter the side B: ");
    scanf("%lf", &B);

    C = sqrt(A*A + B*B);

    printf("Side C: %lf", C);


    return 0;


}