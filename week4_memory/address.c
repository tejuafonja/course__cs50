#include <cs50.h>
#include <stdio.h>

// int main(void)
// {
//     int n = 50;
//     int *p = &n;

//     printf("%i\n", n);
//     printf("%p\n", p);
//     printf("%i\n", *p);
// }


// int main(void)
// { 
//     string s = "HI!";
//     char *p = &s[0];
//     printf("%p\n", s);
//     printf("%p\n", p);
//     printf("%p\n", &s[0]);
//     printf("%p\n", &s[1]);
//     printf("%p\n", &s[2]);
//     printf("%p\n", &s[3]);
// }

int main(void)
{ 
    char *s = "HI!";
    printf("%s\n", s);
    printf("%p\n", s);
}

// typedef char *string;