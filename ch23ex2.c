// ch23ex2.c
// ����ü �迭

#include <stdio.h>
#include <string.h>

struct student
{
    char name[30];
    char subject[30];
    int age;
};

int main()
{
    struct student st[3] = {
        {"ȫ�浿", "����", 20},
        {"��ö��", "����", 21},
        {"ȫ�浿", "����", 22}
    };

    strcpy(st[0].subject, "C���");
    strcpy(st[1].subject, "PYTHON");
    strcpy(st[2].subject, "JAVA");

    printf("�̸�\t����\t����\n");
    for(int i = 0; i < 3; i++)
    {
        printf("%s\t%s\t%d\n", st[i].name, st[i].subject, st[i].age);

    }
    return 0;
}
