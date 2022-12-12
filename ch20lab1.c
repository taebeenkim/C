// ch20lab1.c

#include <stdio.h>

int main()
{
    int num = 30;
    int *pX; // 정수형 포인터 변수 pX 선언
    int *pY;

    pX = &num; // pX 포인터는 변수 num 참조
    pY = &num;

    *pY += 5; // pY 포인터의 참조 값을 5 증가

    printf("num: %d, *pX: %d, *pY: %d\n", num, *pX, *pY);

    return 0;
}
