//ch9ex2.c
// ���� ���ϱ�

#include <stdio.h>

int main()
{
    int score;

    printf("������ �Է��ϼ���: ");
    scanf("%d", &score);

    if(score >= 90) {
        printf("A���� �Դϴ�. ");
    } else if(score >= 80) {
        printf("B���� �Դϴ�. ");
    } else if(score >= 70) {
        printf("B���� �Դϴ�. ");
    } else if(score >= 60) {
        printf("C���� �Դϴ�. ");
    } else {
        printf("F���� �Դϴ�. ");
    }
    return 0;
}
