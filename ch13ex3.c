// ch13ex3.c
// ���� �� ���ϱ�

#include <stdio.h>

int main()
{
    int n1, n2;
    char choice;

    do {
        printf("2���� ������ �Է��ϼ���: ");
        scanf("%d %d", &n1, &n2);

        printf("%d + %d = %d\n", n1, n2, n1 + n2);

        printf("��� ������ �ұ��?(Y/N): ");
        scanf(" %c", &choice);
    } while(choice == 'Y' || choice == 'y');

    return 0;
}
