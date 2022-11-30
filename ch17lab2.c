// ch17lab2.c
// 5명의 성적을 입력받아
// 총점(s), 평균(avg) 구하기

#include <stdio.h>

int main()
{
    int i;
    int score[5];
    int s = 0;
    int c = 0;
    float avg;

    // 성적 입력받기
    for(i = 0; i < 5; i++)
    {
        printf("%d번 성적: ", i + 1);
        scanf("%d", &score[i]);

    // 평균구하기
    for(i = 0; i < 5; i++)
    {
         s += score[i];
         c++;
    }
    avg = (float)s / c;
    printf("평균: %1.f\n", avg);

    // 80점 이상은 '합격자수: 00명' 출력하기 (cnt)
    int cnt = 0;
    for(i = 0; i < 5; i++)
    {
        if(score[i] >= 80) cnt++;
    }
    printf("합격자수: %d명\n", cnt);

    return 0;
}

