// ch13p4.c
// 유효한 점수 입력받

#include <stdio.h>

int main()
{
    int score;

    do {
        printf("점수를 입력하세요(0~100): ");
        scanf("%d", &score);
    } while(score < 0 || score > 100);

    return 0;
}
