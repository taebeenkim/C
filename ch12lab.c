// ch12lab2.c

#include <stdio.h>

int main()
{
    int n1 = 10;
    int n2 = 5;
    char op;

    printf("%d�� %d�� ������ �����ϼ���(+,-,*,/,%%): ",n1, n2);
    scanf("%d", &op );

    switch(op)
    {
    case '+' :
        printf("%d %c %d�� %d �Դϴ�.", n1, op, n2, n1 + n2);
        break;
    case '-' :
        printf("%d %c %d�� %d �Դϴ�.", n1, op, n2, n1 - n2);
        break;
    case '*' :
        printf("%d %c %d�� %d �Դϴ�.", n1, op, n2, n1 * n2);
        break;
    case '/' :
        printf("%d %c %d�� %d �Դϴ�.", n1, op, n2, n1 / n2);
        break;
    case '%' :
        printf("%d %c %d�� %d �Դϴ�.", n1, op, n2, n1 % n2);
        break;

    default:
        printf("�߸��� ��ȣ�Դϴ�.");
    }
    return 0;
}
