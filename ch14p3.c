// ch14p3.c
// ��ø for

#include <stdio.h>

int main()
{
    int i;
    int j;

    for(i = 0; i <= 5; i++)
    {
        for(j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
