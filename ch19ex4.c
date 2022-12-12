// ch19ex4.c

#include <stdio.h>

int main()
{
    int i, j;
    int cnt = 1;
    int arr[4][4];

    for(i = 0; i < 4; i++)
    {
        for(j = 0; j < 4; j++)
        {
            arr[i][j] = cnt;
            cnt++;
        }
    }

    for(i = 0; i < 4; i++)
    {
        for(j = 0; j < 4; j++)
        {
            printf("%02d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
