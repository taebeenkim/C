//ch9ex2.c
// 학점 구하기

#include <stdio.h>

int main()
{
    int score;

    printf("성적을 입력하세요: ");
    scanf("%d", &score);

    if(score >= 90) {
        printf("A학점 입니다. ");
    } else if(score >= 80) {
        printf("B학점 입니다. ");
    } else if(score >= 70) {
        printf("B학점 입니다. ");
    } else if(score >= 60) {
        printf("C학점 입니다. ");
    } else {
        printf("F학점 입니다. ");
    }
    return 0;
}
