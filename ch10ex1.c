// ch10ex1.c
// 국영수 평균 구하기
// 평균이 70점이상이고 모든 과목이 40점이상이면 합격

#include <stdio.h>

int main()
{
    int kor, eng, mat;
    int avg;

    printf("국어 점수: ");
    scanf("%d", &kor);
    printf("영어 점수: ");
    scanf("%d", &eng);
    printf("수학 점수: ");
    scanf("%d", &mat);

    avg = (kor + eng + mat) / 3;
    printf("국어: %d점, 영어: %d점, 수학: %d점\n", kor, eng, mat);
    printf("평균 %d점", avg);

    if(avg >= 70)
    {
        if(kor >= 40 && eng >= 40 && mat >= 40) {
            printf("평균 70점 이상으로 합격");
        } else {
            printf("40점 미만 과목이 있습니다. 불합격입니다.");
        }
    } else {
        printf("평균 %d점으로 불합격입니다.", avg);
    }

    return 0;
}
