#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

char* addBinary(char* a, char* b) {
    unsigned int x = 0;
    unsigned int y = 0;
    unsigned int z = 0;
    unsigned int i = strlen(a);
    char* result;

    while (i > 0)
    {
        x = x + ((a[i - 1] - 48) * pow(2, z));
        i--;
        z++;
        //printf("%i \n", x);
    }

    i = strlen(b);
    z = 0;
    while (i > 0)
    {
        y = y + ((b[i - 1] - 48) * pow(2, z));
        i--;
        z++;
        //printf("%i \n", y);
    }
    z = x + y;
    int tmp = z;
    i = 0;
    while(tmp > 0)
    {
        tmp = tmp / 2;
        i++; 
    }
    result = malloc(sizeof(char) * i+1);
    result[i] = '\0';
    while(i > 0)
    {
        result[i-1] = (z % 2) + 48;
        z = z / 2;
        i--;
    }
    // printf("%i \n", x);
    // printf("%i \n", y);
    // printf("%i \n", z);
    
    return result;
}

int main(void)
{
    char* res = addBinary("10100000100100110110010000010101111011011001101110111111111101000000101111001110001111100001101", "110101001011101110001111100110001010100001101011101010000011011011001011101111001100000011011110011");
    printf("%s", res);
    return 1;
}