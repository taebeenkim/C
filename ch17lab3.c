// ch17lab3.c

# include <stdio.h>
# include <stdlib.h>
# include <time.h>

#define MAX_NUM 10

int main()
{
    int i, j, temp;
    int max, min;
    int n[MAX_NUM];

    srand(time(NULL)); // ���� �õ尪 �ʱ�ȭ

    for (i = 0; i < 10; i++)
    {
        n[i] = rand() % 100;
        printf("%d ", n[i]);
    }
    printf("\n\n");

    // ��ǰ����(��������) �������� �����ϱ�
    for(i = 0; i < MAX_NUM - 1; i++)
    {
        for(j = 0; j < MAX_NUM - 1 - i; j++)
        {
            if(n[j] > n[j + 1])
            {
                // �� �� �ٲٱ�
                temp = n[j];
                n[j] = n[j + 1];
                n[j + 1] = temp;
            }
        }
    }

    for(i = 0; i < MAX_NUM; i++)
        printf("%d ", n[i]);

    return 0;
}
