// ch17ex3_1.c
// 최다 득점 경기를 찾아 해당 경기의 어시스트 출력하기

#include <stdio.h>

int main()
{
    int i;
    int max, max_idx;

    int score[5] = {10, 5, 8, 20, 16};
    int assist[5] = {7, 2, 10, 9, 8};

    max = score[0];
    max_idx = 0;

    // 최다 득점 찾기
    for(i = 0; i < 5; i++)
    {
        if(score[i] > max)
        {
            max = score[i];
            max_idx = i;
        }
    }

    //최다 득점 경기 결과 출력하기
    printf("최다 득점 경기: %d번째, 득점: %d, 어시스트: %d회\n",
           max_idx + 1, max, assist[max_idx]);

    return 0;
}
