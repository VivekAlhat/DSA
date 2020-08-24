#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    ptr = (int *)malloc(5 * sizeof(int));
    if (ptr == NULL)
    {
        printf("Memory is not allocated\n");
    }
    else
    {
        for (int i = 0; i < 5; ++i)
        {
            ptr[i] += i + 1;
        }

        // Prints address of elements
        for (int i = 0; i < 5; ++i)
        {
            printf("%p ", &ptr[i]);
        }

        printf("\n");

        // Prints values of elements
        for (int i = 0; i < 5; ++i)
        {
            printf("%d ", ptr[i]);
        }

        printf("\n");
    }
    return 0;
}