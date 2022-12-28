// ch26ex2.c

#include <stdio.h>
#define MAX_NO  5

float compute_avg(int score[]);
void prn_avg(int score[], float avg);
void input_score(int score[]);

int main()
{
    float avg;
    int score[MAX_NO];
    int i;

    // ���� �Է� �ޱ�
    input_score(score);

    // ��� ����ϱ�
    avg = compute_avg(score); // �迭 ù ������ �ּ�

    // ����ϱ�
    prn_avg(score, avg);
    return 0;
}

void input_score(int score[])
{
    int i;
    for(i = 0; i < MAX_NO; i++)
    {
        printf("%d. �л� ������ �Է��ϼ���: ", i + 1);
        scanf("%d", &score[i]);
    }
}

void prn_avg(int score[], float avg)
{
    int i;
    // ���� ����ϱ� (1�� 00��..)
    for(i = 0; i < MAX_NO; i++)
        printf("%d�� %d��\n", i + 1, score[i]);


    // ��� ����ϱ� (���: 00��)
    printf("���: %.1f\n", avg);
}

float compute_avg(int score[])
{
    int s = 0;
    int i;
    float avg;
    for(i = 0; i < MAX_NO; i++)
    {
        s += score[i];
    }
    avg = (float)s / MAX_NO;
    return avg;
}

