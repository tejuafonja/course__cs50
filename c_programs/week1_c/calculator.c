#include <cs50.h>
#include <stdio.h>

int main(void) 
{
    // Prompt user for x
    // long x = get_int("x: ");
    float x = get_float("x: ");

    // Prompt user for y
    // long y = get_int("y: ");
    float y = get_float("y: ");

    // Divide x by y
    float z = x / y;

    // Add x and y
    // printf("%li\n", x + y);

    // Add x and y
    printf("%.2f\n", z);

    // int x = 2;
    // int y = 32;

    // print("%li\n", x^y);
}