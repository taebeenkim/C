// ch20ex1.c

#include <stdio.h>

int main()
{
    int n1, n2;
    int *pNum;

    pNum = &n1;
    n1 = 25;
    printf("n1: %d, pNum: %d\n", n1, *pNum);

    *pNum = 10;
    printf("n1: %d, pNum: %d\n", n1, *pNum);

    n2 = *pNum;
    printf("n2: %d, pNum: %d\n", n2, *pNum);

    n2 = 30;
    printf("n2: %d, pNum: %d\n", n2, *pNum);

    pNum = &n2;
    printf("n2: %d, pNum: %d\n", n2, *pNum);


    return 0;
}
