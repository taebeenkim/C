// ch9p1.c
// ���迬����

# include <stdio.h>

int main()
{
    int a, b;
    int score;

    a = (4 <10);
    b = (8 == 9);

    printf("a: %d, b: %d\n", a, b);

    score = 78;
    printf("score 80�� �̻�: %d\n", score >= 80);

    if(score >= 80) {
        printf("����� �հ��Դϴ�!\n");
    } else {
        printf("����� ���հ��Դϴ�.\n");
    }
    return 0;
}
