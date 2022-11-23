// ch4ex2.c

#include <stdio.h>

int main()
{
    int i, j, n;
    int max = 0;
    int max_i, max_j;

    for(i = 1; i < 100; i++)
    {
        j = 100 - i;
        n = i * j;
        if(n > max) {
            max = n;
            max_i = i;
            max_j = j;
        }
    }

    printf("max: %d * %d = %d\n", max_i, max_j, max);
    return 0;
}
