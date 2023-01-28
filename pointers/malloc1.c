#include <stdio.h>
#include <stdlib.h>

int *f1()
{
    int *xp = (int *)malloc(sizeof(int));
    if (xp == NULL)
    {
        return NULL;
    }
    *xp = 42;
    printf("xp=%p\n", xp);
    return xp;
}

int *f2()
{
    int *yp = (int *)malloc(sizeof(int));
    if (yp == NULL)
    {
        return NULL;
    }
    *yp = 0;
    printf("yp=%p\n", yp);
    return yp;
}

int main()
{
    int *p1 = f1();
    if (p1 == NULL)
    {
        printf("Memory error!");
        return 1;
    }

    printf("p1=%p\n", p1);
    printf("*p1=%i\n", *p1);

    int *p2 = f2();
    if (p2 == NULL)
    {
        printf("Memory error!");
        return 1;
    }

    printf("p2=%p\n", p2);
    printf("*p2=%i\n", *p2);

    /* danger removed */
    printf("*p1=%i\n", *p1);

    return 0;
}

