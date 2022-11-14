// ch7ex1.c
// 산술 연산자

#include <stdio.h>

int main()
{
    int n1 = 10;
    int n2 = 3;

    printf("%d + %d = %d\n", n1, n2, n1 + n2);
    printf("%d - %d = %d\n", n1, n2, n1 - n2);
    printf("%d * %d = %d\n", n1, n2, n1 * n2);
    printf("%d / %d = %d\n", n1, n2, n1 / n2);
    printf("%d %% %d = %d\n", n1, n2, n1 % n2);

    return 0;
}
