// ch17lab2.c
// 5���� ������ �Է¹޾�
// ����(s), ���(avg) ���ϱ�

#include <stdio.h>

int main()
{
    int i;
    int score[5];
    int s = 0;
    int c = 0;
    float avg;

    // ���� �Է¹ޱ�
    for(i = 0; i < 5; i++)
    {
        printf("%d�� ����: ", i + 1);
        scanf("%d", &score[i]);

    // ��ձ��ϱ�
    for(i = 0; i < 5; i++)
    {
         s += score[i];
         c++;
    }
    avg = (float)s / c;
    printf("���: %1.f\n", avg);

    // 80�� �̻��� '�հ��ڼ�: 00��' ����ϱ� (cnt)
    int cnt = 0;
    for(i = 0; i < 5; i++)
    {
        if(score[i] >= 80) cnt++;
    }
    printf("�հ��ڼ�: %d��\n", cnt);

    return 0;
}

