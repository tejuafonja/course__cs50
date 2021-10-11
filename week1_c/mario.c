#include <cs50.h>
#include <stdio.h>

// int main(void)
// {
//     int n;
//     do
//     {
//         n = get_int("Width: ");
//     }
//     while (n < 1);

//     for (int i = 0; i < n; i++)
//     {
//         printf("?");
//     }
//     printf("\n");
// }

int main(void)
{
    int n;
    do
    {
        n = get_int("Width: ");
    }
    while (n < 1);

    // For each row
    for (int i = 0; i < n; i++)
    {
        // For each column
        for (int j = 0; j < n; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}