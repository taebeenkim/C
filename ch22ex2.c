// ch22ex2.c
// n���� ���� �����ϱ�

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i;
    int n;
    int *randNum;

    srand(time(NULL));

    // �� ���� ������ �����ұ��? <---- n
    printf("��� ������ �����ұ��? ");
    scanf("%d", &n);

    //  randNum�� n���� �޸� �Ҵ� �ϱ�
    randNum = (int *)malloc(n * sizeof(int));

    // �Ҵ� ���� Ȯ��
    if(randNum == NULL)
    {
        printf("�޸� �Ҵ� ����!");
        exit(1);
    }

    // ������ randomNum�� 1~500 ������ ���� ����, ����ϱ�
    for(i = 0; i < n; i++)
    {
        randNum[i] = rand() % 500 + 1;
        printf("%3d ", randNum[i]);

    }


    // �޸� ���� �ϱ�
    free(randNum);

    return 0;
}
