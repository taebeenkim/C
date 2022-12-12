// ch19lab2.c

#include <stdio.h>

int main()
{
    int i, j;
    int cnt = 2;
    int a[3][4];

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 4; j++)
        {
            a[i][j] = cnt;
            cnt += 2;
            printf("%2d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
