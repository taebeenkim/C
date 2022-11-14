// ch7ex3.c
// 평균 구하기

#include <stdio.h>

int main()
{
    int kor, eng, mat, sci;
    int sum;
    float avg;

    printf("국어, 영어, 수학, 과학 점수를 순서대로 입력하세요: ");
    scanf("%d %d %d %d", &kor, &eng, &mat, &sci);

    // avg = (kor + eng + mat + sci) \ 4.0;
    sum = kor + eng + mat + sci;
    avg = (sum) / 4;
    printf ("\n4과목 평균은 %.1f점입니다.\n", avg);

    return 0;
}
