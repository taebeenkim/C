// ch23ex1_2.c

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
    struct student s1 = {"ȫ�浿", "����", 18};

    printf("%s�л�(%d��) �������� %s\n", s1.name, s1.age, s1.subject);

    struct student *ps;
    ps = &s1;
    ps->age = 30;
    strcpy(ps->name, "����ü");
    strcpy(ps->subject, "c���");
    printf("%s�л� ����: %d.\n", ps->name, ps->age);


    printf("%s�л�(%d��) �������� %s\n", s1.name, s1.age, s1.subject);
    return 0;
}
