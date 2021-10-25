#include <stdio.h>
#include <stdlib.h>

void get_int(); // prototype of the function
void get_string();

int main(void)
{
    get_int();
    get_string();

}

void get_int()
{
    int x;
    printf("x: ");
    scanf("%i", &x); // store whatever the user type in this location
    printf("x: %i\n", x);
}

void get_string()
{
    // char *s = malloc(4);
    char s[4];
    printf("s: ");
    scanf("%s", s); // store whatever the user type in this location
    printf("s: %s\n", s);
}