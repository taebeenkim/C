//ch16lab2.c
//실습문제

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int i;
    int r;

    srand(time(NULL)); // 난수 시드값 초기화

    printf("난수 출력: ");
    for(i = 0; i < 0; i++)
    {
        r = rand() % 100 + 1;
        printf("%d", r);
    }

    return 0;
}
