// ch9lab1.c

#include <stdio.h>

int main()
{
    int n1;
    int n2;

    printf("���� 2���� �Է��ϼ���: ");
    scanf("%d %d", &n1, &n2);

    if (n1 > n2) {
        printf("%d�� �� Ů�ϴ�.", n1);
    } else if (n1 == n2) {
        printf("�μ��� �����ϴ�.");
    } else {
        printf("%d�� �� Ů�ϴ�.", n2);
    }
    return 0;
}

