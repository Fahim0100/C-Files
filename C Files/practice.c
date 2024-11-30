#include<stdio.h>
#include<math.h>
#include<stdbool.h>
#include<string.h>
#include<unistd.h>
#include<stdlib.h>
#include<time.h>

int main() {
    char emoji[4];

    printf("Please a character: ");
    scanf("%s", emoji);
    
    for(int i = 0; i<=10; i++)
    {
        for(int j = 0; j<=11-i; j++)
        {
            printf("%s", emoji);
        }
        printf("\n");
    }

    return 0;

    
}