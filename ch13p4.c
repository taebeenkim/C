// ch13p4.c
// ��ȿ�� ���� �Է¹�

#include <stdio.h>

int main()
{
    int score;

    do {
        printf("������ �Է��ϼ���(0~100): ");
        scanf("%d", &score);
    } while(score < 0 || score > 100);

    return 0;
}
