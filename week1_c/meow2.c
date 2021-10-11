#include <cs50.h>
#include <stdio.h>

void meow(void);


int main(void)
{
    int repeat = 2;

    for (int i = 0; i < repeat; i++)
    {
        meow();
    }
    
}

void meow(void)
{
    printf("meow\n");
}
