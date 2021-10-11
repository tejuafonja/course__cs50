#include <cs50.h>
#include <stdio.h>


void draw(int n);

int main(void)
{
    int height = get_int("Height: ");
    
    draw(height);
}

void draw(int n)
{
    // base case
    if (n <= 0)
    {
        return;
    }

    // if not base case, then recurse
    draw(n - 1);

    for (int i=0; i < n; i++)
    {
        printf("#");
    }
    printf("\n");
}