// ch12ex1.c

#include <stdio.h>

int main()
{
    int choice;
    printf("----------------\n");
    printf("������ �Ͻðڽ��ϱ�?\n");
    printf("1. ���ο� ����ó �߰�\n");
    printf("2. ����ó ����\n");
    printf("3. ����ó ��ȭ");
    printf("4. ����ó ���� �޼���\n");
    printf("5. ����\n");
    printf("----------------\n");

    scanf("%d", &choice);
    switch(choice)
    {
    case 1:
        printf("1. ����ó�� �߰��մϴ�.\n");
        break;
    case 2:
        printf("2. ����ó�� �����մϴ�.\n");
        break;
    case 3:
        printf("3. ����ó�� ��ȭ�մϴ�.\n");
        break;
    case 4:
        printf("4. �޼����� �����մϴ�.\n");
        break;
    case 5:
        exit(0);
    default:
        printf("�߸��� �����Դϴ�.\n");
    }

    return 0;
}
