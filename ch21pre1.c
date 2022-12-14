// ch21pre1.c
// 배열과 포인터

#include <stdio.h>

int main()
{
    int n[5] = {10, 20, 30, 40, 50};
    int *pNum;
    int i;

    // 배열 n을 pNum에 복사
    pNum = n; // n은 n[0] 데이터의 주소

    printf("n[0]: %d, %d\n", n[0], *n);
    printf("n[1]: %d, %d\n", n[1], *(n + 1));
    printf("n[2]: %d, %d\n", n[2], *(n + 2));
    printf("n[3]: %d, %d\n", n[3], *(n + 3));
    printf("n[4]: %d, %d\n", n[4], *(n + 4));

    for(i = 0; i < 5; i++)
    {
        printf("pNum[0]: %d, %d\n", pNum[0], *(pNum + i));
    }


    n[3] = 99;
    printf("n[3]: %d, pNum[3]: %d\n", n[3], pNum[3]);
    printf("(pNum + 3): %d, *pNum + 3: %d\n", *(pNum + 3), *pNum + 3);
    return 0;


}
