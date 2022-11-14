// ch7lab2.c

#include <stdio.h>

int main()
{
    int n1, n2, n3;
    int r;

    printf("정수 3개를 입력하세요: ");
    scanf("%d %d %d", &n1, &n2, &n3);

    r = (n1 + n2) * n3;
    printf("(%d + %d) * %d = %d", n1, n2, n3, r);




}
