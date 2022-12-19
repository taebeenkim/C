// ch22lab1.c

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int n;
    int *score;
    float avg;
    int sum = 0;

    score = (int *)malloc(n * sizeof(int));

    // 학생 수 입력 받기
        printf("학생수를 입력하세요! ");
        scanf("%d", &n);

    // 메 모리 할당 받기
    score = (int *)malloc(n * sizeof(int));
    if(score == NULL)
    {
        printf("메모리 할당 실패!");
        exit(1);
    }

    // 점수 입력 받기
    for(i = 0; i < n; i++)
    {
        printf("%d번째 학생의 점수를 입력하세요: ", i + 1);
        scanf("%d", &score[i]);
    }


    // 총점, 평균 계산하기
    for(i = 0; i < n; i++)
    {
        sum += score[i];
    }
    avg = (float)sum / n;

    // 출력하기
    printf("\n");
    printf("학생들의 총점은 %d점이고 평균은 %.1f점입니다.\n",
           sum, avg);

    // 메모리 해제
    free(score);

}
