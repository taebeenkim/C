//ch17ex2.c
// 배열 연습

#include <stdio.h>

int main()
{
    int i;
    int s = 0;
    int c = 0;
    float avg;
    int score[5] = {55, 66, 77, 88, 33};

    // 5명의 성적 출력하기
    for(i = 0; i < 5; i++)
        printf("%d, ", score[i]);
    printf("\n");

    // 5명의 성적 총점, 평균 구하기 (s, c, avg)
    for (i = 0; i < 5; i++)
    {
        s += score[i];
        c++;
    }
    avg = (float)s / c;
    printf("총점: %d, 평균: %.1f\n", s, avg);


    // 70점 이상 학생 수(cnt)구하기
    int cnt = 0;

    for (i = 0; i < 5; i++)
    {
        if(score[i] >= 70) cnt++;
    }

    printf("70점 이상 학생수: %d명", cnt);
    return 0;
}
