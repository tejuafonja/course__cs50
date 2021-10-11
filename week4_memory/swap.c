#include <stdio.h>
#include <stdlib.h>


void swap(int *a, int *b);

int main(void)
{
    int a = 3;

    int b = 4;
    printf("a is %i, b is %i\n", a, b);
    swap(&a, &b); // go to the address of a and b
    printf("a is now globally %i, b is now globally %i\n", a, b);


}

void swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;

    printf("a is locally %i, b is locally %i\n", *a, *b);
}