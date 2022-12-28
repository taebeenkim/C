// ch25lab3.c

#include <stdio.h>

void swap(int *px, int *py);

int main()
{
    int x = 10;
    int y = 20;

    printf("x = %d, y = %d\n", x,y);
    swap(x, y);
    printf("x = %d, y = %d\n", x,y);

    return 0;
}

void swap(int *px, int *py)
{
    int t;
    t = *px;
    *px = *py;
    *py = t;
}

