// ch17ex3.c
// 1. �ִ� ���� ��� ã��

#include <stdio.h>

int main()
{
    int i;
    int max, max_idx;

    int score[5] = {10, 5, 8, 20, 16};

    max = score[0];
    max_idx = 1;

    // �ִ� ���� ã��
    for(i = 0; i < 5; i++)
    {
         printf("i: %d, score[i]: %d, score[i] > max: %d,",
               i, score[i], score[i] > max);
        if(score[i] > max)
        {
            max = score[i];
            max_idx = i+1;
        }
        printf("max: %d, max_idx: %d\n",
               max, max_idx);
  }

  printf("�ִٵ���: %d��, ���: %d��°\n", max, max_idx);

  return 0;
}
