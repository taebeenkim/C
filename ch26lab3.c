// ch26lab3.c

#include <stdio.h>

int fact(int n);

int main()
{
    int n;
    int f;

    printf("정수를 입력하세요: ");
    scanf("%d", &n);

    f = fact(n);
    printf("1 ~ %d까지의 곱은%d 입니다.", n, f);

    return 0;
}

int fact(int n)
{
    int i;
    int s = 1;
    for(i = 1; i <= n; i++) s *= i;

    return s;

}
