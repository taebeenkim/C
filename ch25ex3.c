// ch25ex3.c
// �μ��� ��, ����, �迭 �����ϱ�
#include <stdio.h>

void change_data(int n1, int *pn, float arr[]);
void prn_arr(float arr[]);

int main()
{
    int i;
    int n1 = 10, n2 = 20;
    float arr[5] = {10.1, 10.2, 10.3, 10.4, 10.5};

    printf("n1: %d, n2: %d, ", n1, n2);
    prn_arr(arr);

    change_data(n1, &n2, arr);
    printf("----------------------------\n");
    printf("�Լ� ȣ�� �� �� \n");
    printf("n1: %d, n2: %d, ", n1, n2);
    prn_arr(arr);

    return 0;
}

void change_data(int n1, int *pn, float arr[])
{
    int i;
    n1 = 50;
    *pn = 100;
    for(i = 0; i < 5; i++)
    {
        arr[i] += 10;
    }
}

void prn_arr(float arr[])
{
    printf("arr: ");
    int i;
    for(i = 0; i < 5; i++)
    {
        printf("%.1f ", arr[i]);
    }
    printf("\n");
}
