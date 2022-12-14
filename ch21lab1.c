// ch21lab1.c

#include <stdio.h>

int main()
{
    int n[5] = {10, 20, 30, 40, 50};
    int *pNum;
    int i;

    pNum = n;

    for(i = 0; i < 5; i++)
    {
       *(pNum + i) += 1;
       printf("%d, %d\n", *(pNum + i), n[i]);
    }

    return 0;
}
