// ch25ex1_1.c
// 인수로 변수의 조수 전달

#include <stdio.h>

void twice(int *pn);

int main()
{
    int n;
    printf("정수를 입력하세요: ");
    scanf("%d,", &n);

    twice(&n);
    printf("In main n: %d\n", n);

    return 0;
}

void twice(int *pn)
{
    *pn *= 2;
    printf("In twice n: %d\n", *pn);
}

