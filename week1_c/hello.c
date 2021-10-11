#include <cs50.h>
#include <stdio.h>

// int main(void)
// {
//     printf("hello, CS50!\n");
// }

int main(void)
{
    string answer = get_string("What's your name? ");
    int age = get_int("What is your age? ");
    printf("hello, %s, and you are %d years old.\n", answer, age);
}