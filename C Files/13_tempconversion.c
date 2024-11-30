#include<stdio.h>
#include<ctype.h>

int main(){

    char unit;
    float temp;

    printf("\nIs the temperature in (F) or (C)?: ");
    scanf("%c", &unit);

    unit = toupper (unit); // toupper() is used to make the program accept the lower
                           // or upper case letter and the assigned letter.

    if(unit == 'C'){
        printf("The temperature is currently in Celcius.\n");
        printf("Now enter the temperature in Celcius: ");
        scanf("%f", &temp);
        temp = (temp*9/5)+32;
        printf("\nThe temperature in Farenhite is %.2f", temp);
    }
    else if(unit == 'F'){
        printf("The temperature is currently in Farenhite.");
        printf("\nNow enter the temperature in Farenhite: ");
        scanf("%f", &temp);
        temp = ((temp-32)*5)/9;
        printf("\nThe temperature in Celcius is %.2f", temp);
    }
    else{
        printf("\n '%c' is not a valid unit for temperature messurement.", unit);
    }

    return 0;
}