// ch14ex1.c
// �Էµ� ���� �� �ִ밪 ã��

#include <stdio.h>

int main()
{
    int i, n;
    int max = 0;
    int min = 999;
    int max_i;
    int min_i;

    for(i = 0; i < 5; i++)
    {
        printf("%d��° ������ �Է��ϼ���(1~100): ", i + 1);
        scanf("%d", &n);

        if(n > max) max = n;
        {
            max = n;
            max_i = i + 1;
        }
        if(n < min)
        {
            min = n;
            min_i = i + 1;
        }
    }
    printf("�ִ밪: %d��° �Է� �� %d\n", max_i, max);
    printf("�ּҰ�: %d��° �Է� �� %d\n", min_i, min);
    return 0;
}
