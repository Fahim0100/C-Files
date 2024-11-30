#include<stdio.h>
#include<math.h>
#include<stdbool.h>
#include<string.h>
#include<unistd.h>
#include<stdlib.h>
#include<time.h>

int main() {
    int count = 0; 
    double sum = 0.0; 
    double number; 

    
    printf("Input numbers to calculate the average (enter a non-numeric value to stop):\n");

    while (1) {
        printf("Input a number: ");
        if (scanf("%lf", &number) != 1) {
            break;
        }

        sum += number;
        count++;
    }

    if (count > 0) {
        double average = sum / count;
        printf("Average of input numbers: %.2lf\n", average);
    } else {
        printf("No numbers were entered.\n");
    }


    return 0;
    
}