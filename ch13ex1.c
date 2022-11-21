// ch13ex1.c
// 5개의 정수 합계 구하기

#include <stdio.h>

int main()
{
    int num;
    int cnt = 0;
    int sum = 0;

    while (cnt < 5)
    {
        printf("정수 입력: ");
        scanf("%d", &num);

        sum += num;
        cnt++;
    }

    printf("합계는 %d입니다. \n", sum);

    return 0;
}
