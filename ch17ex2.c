//ch17ex2.c
// �迭 ����

#include <stdio.h>

int main()
{
    int i;
    int s = 0;
    int c = 0;
    float avg;
    int score[5] = {55, 66, 77, 88, 33};

    // 5���� ���� ����ϱ�
    for(i = 0; i < 5; i++)
        printf("%d, ", score[i]);
    printf("\n");

    // 5���� ���� ����, ��� ���ϱ� (s, c, avg)
    for (i = 0; i < 5; i++)
    {
        s += score[i];
        c++;
    }
    avg = (float)s / c;
    printf("����: %d, ���: %.1f\n", s, avg);


    // 70�� �̻� �л� ��(cnt)���ϱ�
    int cnt = 0;

    for (i = 0; i < 5; i++)
    {
        if(score[i] >= 70) cnt++;
    }

    printf("70�� �̻� �л���: %d��", cnt);
    return 0;
}
