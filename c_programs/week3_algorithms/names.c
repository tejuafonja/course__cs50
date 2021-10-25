#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string names[] = {"Bill", "Charlie", "Fred", "George", "Ginny", "Percy", "Ron"};
    for (int i = 0; i<7; i++)
    {   
        // strcmp -> "string compares" compares that two strings are the same.
        if (strcmp(names[i], "Teju") == 0)
        {
            printf("Found\n");
            return 0;
        }
    }
    printf("Not Found\n");
    return 1;
}