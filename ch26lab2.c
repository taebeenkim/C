//ch26lab2.c

#include <stdio.h>

int sum(int n);

int main()
{
    int n;
    int s;

    printf("������ �Է��ϼ���: ");
    scanf("%d", &n);

    s = sum(n);
    printf("1 ~ %d������ �հ��: %d�Դϴ�.\n", n, s);
    return 0;
}

int sum(int n)
{
    int i;
    int s = 0;
    for(i = 1; i <= n; i++) s += i;

    return s;

}


