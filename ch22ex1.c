// ch22ex1.c
// 5�� ���� �����͸� �����ϱ� ���� �޸� �Ҵ�ޱ�

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int *ptr;

    ptr = (int *)malloc(10 * sizeof(int));

    if(ptr == NULL)
    {
        printf("�޸� �Ҵ� ����!");
        exit(1);
    }

    for(i = 0; i < 10; i++)
    {
        ptr[i] = i *10;
    }

    for(i = 0; i < 10; i++)
    {
        printf("%d ", ptr[i]);
    }

    free(ptr); // �޸� ����
    return 0;
}
