// ch23ex3.c
// ����ü �迭 �Է� �ޱ�

#include <stdio.h>

struct student
{
    char name[30];
    char subject[30];
    int age;
};

int main()
{
    int i;
    struct student st[3];

    for(i = 0; i < 3; i++)
    {
        printf("%d.\n", i + 1);
        printf("�л��̸�: ");
        // scanf("%s", st[i].name);
        gets(st[i].name);
        printf("��������: ");
        // scanf("%s", st[i].subject);
        gets(st[i].subject);
        printf("�л�����: ");
        scanf("%d", &st[i].age);

        getchar(); // �� ���� �Է�
    }

    printf("\n----------- ���� ��� --------\n");
    printf("�̸�\t����\t����\n");
    for(i = 0; i < 3; i++)
    {
        printf("%s\t%s\t%d\n", st[i].name, st[i].subject, st[i].age);
    }

    return 0;
}
