#include <stdio.h>
#include <stdlib.h>


// int main(void)
// {
//     int list[3];
//     list[0] = 1;
//     list[1] = 2;
//     list[2] = 3;

//    for (int i = 0; i < 3; i++)
//    {
//         printf("%i\n", list[i]);
//    }
// }


int main(void)
{
    // Dynamically allocate an array of size 3
    int *list = malloc(3 * sizeof (int)); // an array of size 3 which lives on the heap

    if (list == NULL)
    {   
        free(list);
        return 1;
    }

    // Assign three numbers to that array
    list[0] = 1;
    list[1] = 2;
    list[2] = 3;

    // Time passes
    
    // Resize old array to be of size 4
    int *tmp = realloc(list, 4 * sizeof (int));
    
    // Add forth  number
    tmp[3] = 4;
    
    // Point new chunch of memory to old memory
    list = tmp; // when list is freed, it's the same as freeing tmp because list now points to tmp
    
    // Print values in array
    for (int i = 0; i < 4; i++)
    {
        printf("%i\n", list[i]);
    }
    
    // Free memory
    free(list);
    return 0;

}

// Old solution
//     // Allocate new chunk of memory
//    int *tmp = malloc(4 * sizeof (int));

//    if (tmp == NULL)
//     {   
//         free(list);
//         free(tmp);
//         return 1;
//     }

//     // Copy numbers from old array into new array
//     for (int i = 0; i < 3; i++)
//    {
//         tmp[i] = list[i];
//    }
// tmp[3] = 4;
// free(list);
// list = tmp;
