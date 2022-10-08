#include <stdio.h>
#include <stdlib.h>

struct data
{
    int n;
    short s;
    long int m;
};

int main(void)
{
    struct data* p_D;
    p_D = malloc(sizeof(struct data));

    if(p_D == 0)
    {
        puts("Memory Allocation Failed!!");
        exit(-1);
    }
    
    p_D -> n = 100;
    p_D -> s = 200;
    p_D -> m = 300;

    printf("Value in a : %d\n", p_D -> n);
    printf("Value in b : %hd\n", p_D -> s);
    printf("Value in c : %ld\n", p_D -> m);

    free(p_D);
    p_D = 0;

    exit(0);
}
