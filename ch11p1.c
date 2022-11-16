// ch11p1.c
// 조건 연산자(삼항 연산자)

#include <stdio.h>

int main()
{
    int num;

    num = 1;
    printf("나는 %d개의 배%s 먹었다.\n", num,
            num > 1 ? "들을" : "를");

    printf("%d는 %s입니다.", num,
           num % 2 == 0 ? "짝수" : "홀수");

    return 0;
}
