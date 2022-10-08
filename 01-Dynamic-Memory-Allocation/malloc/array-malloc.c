#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int* p_arr;
    int size_arr = 5;

    p_arr = malloc(size_arr * sizeof(int));

    if(p_arr == 0)
    {
        puts("Memory Allocation Failed!!");
        exit(-1);
    }

    int i;

    for(i = 0; i < size_arr; i++)
    {
        *(p_arr + i) = (i + 1) * 100;
    }

    for(i = 0; i < size_arr ; i++)
    {
        printf("Value in index %d : %d\n", i, *(p_arr + i));
    }

    exit(0);
}