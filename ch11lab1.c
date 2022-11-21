//ch11lab1.c

#include <stdio.h>

int main()
{
    int n,m;
    printf("정수 두 개를 입력하세요: ");
    scanf("%d, %d", &n, &m);

    printf("%d", n > m ? n - m : m - n);

    return 0;
}
