// ch17ex3_1.c
// �ִ� ���� ��⸦ ã�� �ش� ����� ��ý�Ʈ ����ϱ�

#include <stdio.h>

int main()
{
    int i;
    int max, max_idx;

    int score[5] = {10, 5, 8, 20, 16};
    int assist[5] = {7, 2, 10, 9, 8};

    max = score[0];
    max_idx = 0;

    // �ִ� ���� ã��
    for(i = 0; i < 5; i++)
    {
        if(score[i] > max)
        {
            max = score[i];
            max_idx = i;
        }
    }

    //�ִ� ���� ��� ��� ����ϱ�
    printf("�ִ� ���� ���: %d��°, ����: %d, ��ý�Ʈ: %dȸ\n",
           max_idx + 1, max, assist[max_idx]);

    return 0;
}
