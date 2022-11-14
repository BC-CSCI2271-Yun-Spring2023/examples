#define _XOPEN_SOURCE 500 // needed for sbrk() on cslab

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
    printf("sbrk(0) = %p\n", sbrk(0));

    int *dynvar = (int *)malloc(sizeof(int));
    printf("dynvar  = %p\n", dynvar);

    printf("sbrk(0) = %p\n", sbrk(0));

    int *dynvar2 = (int *)malloc(sizeof(int));
    printf("dynvar2 = %p\n", dynvar2);

    printf("sbrk(0) = %p\n", sbrk(0));

    return 0;
}

