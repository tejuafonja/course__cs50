#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n = get_int("How many scores would you like to input?: ");
    double scores[n];

    for (int i = 0; i < n; i++)
    {
        scores[i] = get_int("Score %i: ", i);
    }

    printf("Your average score is: %f\n", (scores[0] + scores[1] + scores[2]) / 3.0);

}