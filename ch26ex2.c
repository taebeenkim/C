// ch26ex2.c

#include <stdio.h>
#define MAX_NO  5

float compute_avg(int score[]);
void prn_avg(int score[], float avg);
void input_score(int score[]);

int main()
{
    float avg;
    int score[MAX_NO];
    int i;

    // 성적 입력 받기
    input_score(score);

    // 평균 계산하기
    avg = compute_avg(score); // 배열 첫 데이터 주소

    // 출력하기
    prn_avg(score, avg);
    return 0;
}

void input_score(int score[])
{
    int i;
    for(i = 0; i < MAX_NO; i++)
    {
        printf("%d. 학생 성적을 입력하세요: ", i + 1);
        scanf("%d", &score[i]);
    }
}

void prn_avg(int score[], float avg)
{
    int i;
    // 성적 출력하기 (1번 00점..)
    for(i = 0; i < MAX_NO; i++)
        printf("%d번 %d점\n", i + 1, score[i]);


    // 평균 출력하기 (평균: 00점)
    printf("평균: %.1f\n", avg);
}

float compute_avg(int score[])
{
    int s = 0;
    int i;
    float avg;
    for(i = 0; i < MAX_NO; i++)
    {
        s += score[i];
    }
    avg = (float)s / MAX_NO;
    return avg;
}

