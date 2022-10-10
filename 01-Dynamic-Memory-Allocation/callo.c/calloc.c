#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int* ptr;
    int size = 10;
    int i = 10;

    ptr = (int*)calloc(size, sizeof(int));
    if(ptr == NULL)
    {
	puts("calloc : memory allocation failed.");
	exit(-1);
    }
    
    for(i = 0; i < 10; i++)
    {
	ptr[i] = (i + 1)*10;
    }

    free(ptr);
    return 0;
}

