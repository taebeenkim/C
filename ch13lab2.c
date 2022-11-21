//ch13lab2.c

#include <stdio.h>

int main()
{
    int n;
    int cnt = 1;
    int s = 0;

    printf("정수를 입력하세요: ");
    scanf("%d", &n);

    while (cnt <= n)
    {
        s += cnt;
        cnt++;
        }



    printf("1~%d까지 합계는 %d.\n", n, s);

    return 0;
}
