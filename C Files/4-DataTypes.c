#include <stdio.h>
#include <stdbool.h>

int main(){
    char a = 'c'; // single charcter, %d
    char b = "as i got"; // array of characters, %s

    float c = 3.1416; //32bits, 4bytes, 6-7 digits, %f
    double d =  3.1416542587; // 64bits, 8bytes, 15-16 digits, %lf
    
    //bool e = true //1byte (true or false), %d
    
    char f = 120; // %d , %c
    printf("%c", f);
    printf("%d", f);

    unsigned char f = 255; // %d , %c (0 to +255)

    short int h = 32767; // 2bytes (-32768 to +32767), %d
    unsigned short int i = 65535; // 2bytes (0 to +65535), %d

    int j = 2147483647; // %d, (-2 billion to +2 billion)
    unsigned int = 4653387989; // %u
/*
    long long int l = ; // %lld (-9 quintillion to +9 quintillion)
    unsigned long long int m =  ; //%llu (0 to 18 quintillion)
    use 'u' after the value of unsigned long long int to show the
    big value.
*/

    return 0;
}