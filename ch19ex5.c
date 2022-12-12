// ch19ex5.c

#include <stdio.h>

int main()
{
    int i, j;
    int score[4][4] = {
        {60, 60, 60},
        {70, 70, 70},
        {80, 81, 82}
    };

    // 학생별 총점 구하기
    for(i = 0; i < 3; i++)
    {
        score[i][3] = 0;
        for(j = 0; j < 3; j++)
        {
            score[i][3] += score[i][j];
        }
    }

    // 과목별 총점 구하기
    for(j = 0; j < 4; j++)
    {
        score[3][j] = 0;
        for(i = 0; i < 3; i++)
        {
            score[3][j] += score[i][j];
        }
    }
    // 성적 테이블 출력하기
    for(i = 0; i < 4; i++)
    {
        for(j = 0; j < 4; j++)
        {
            score[3][j] = score[0][j] + score[1][j] + score[2][j] + score[3][j];
            printf("%3d ", score[i][j]);
        }
        printf("\n");
    }

    return 0;
}
