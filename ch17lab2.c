// ch17lab2.c

# include <stdio.h>
# include <stdlib.h>
# include <time.h>

int main()
{
    int i;
    int max, min;
    int n[10];

    srand(time(NULL)); // ���� �õ尪 �ʱ�ȭ

    for (i = 0; i < 10; i++)
    {
        n[i] = rand() % 100;
        printf("%d ", n[i]);
    }
    printf("\n\n");

    for(i = 0; i <10; i++)
    {
        if(n[i] > max) max = n[i];
        if(n[i] < min) min = n[i];
    }
    printf("�ִ밪�� %d, �ּڰ��� %d�Դϴ�.\n",
           max, min);

    return 0;
}

