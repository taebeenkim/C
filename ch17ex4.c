// ch17ex4.c
// 버블정렬(거품정렬)

#include <stdio.h>

# define MAX_NUM 5

int main()
{
    int i, j;
    int temp;
    int num[MAX_NUM] = {50, 75, 93, 16, 32};

    // 오름차순 정렬 (5 > 3 --> 3 > 5)
    for(i = 0; i < MAX_NUM - 1; i++)
    {
        for(j = 0; j < MAX_NUM - 1 - i; j++)
        {
            if(num[j] < num[j + 1])
            {
                temp = num[j];
                num[j] = num[j + 1];
                num[j + 1] = temp;
            }
        }
    }

    for(i = 0; i < MAX_NUM; i++)
        printf("%d ", num[i]);

    return 0;
}
