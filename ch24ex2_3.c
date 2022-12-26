// ch24ex2_3.c

#include <stdio.h>

int twice(int n);

int main()
{
    int r;

    r = twice(5) + twice(3);
    printf("r: %d\n", r);
    return 0;
}

int twice(int n)
{
    n = n * 2;
    return n;
}

