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

    // �л� �� �Է� �ޱ�
        printf("�л����� �Է��ϼ���! ");
        scanf("%d", &n);

    // �� �� �Ҵ� �ޱ�
    score = (int *)malloc(n * sizeof(int));
    if(score == NULL)
    {
        printf("�޸� �Ҵ� ����!");
        exit(1);
    }

    // ���� �Է� �ޱ�
    for(i = 0; i < n; i++)
    {
        printf("%d��° �л��� ������ �Է��ϼ���: ", i + 1);
        scanf("%d", &score[i]);
    }


    // ����, ��� ����ϱ�
    for(i = 0; i < n; i++)
    {
        sum += score[i];
    }
    avg = (float)sum / n;

    // ����ϱ�
    printf("\n");
    printf("�л����� ������ %d���̰� ����� %.1f���Դϴ�.\n",
           sum, avg);

    // �޸� ����
    free(score);

}
