#include <cs50.h>
#include <ctype.h>
#include <string.h>
#include <stdio.h>


int main(void)
{
    string s = get_string("Before: ");
    printf("After: ");
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        if (isupper(s[i]))
        {
            printf("%c", tolower(s[i]));
        }
        else 
        {
            printf("%c",s[i]);
        }
    }
    printf("\n");
}