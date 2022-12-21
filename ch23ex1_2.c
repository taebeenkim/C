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
    struct student s1 = {"홍길동", "수학", 18};

    printf("%s학생(%d살) 수강과목 %s\n", s1.name, s1.age, s1.subject);

    struct student *ps;
    ps = &s1;
    ps->age = 30;
    strcpy(ps->name, "구조체");
    strcpy(ps->subject, "c언어");
    printf("%s학생 나이: %d.\n", ps->name, ps->age);


    printf("%s학생(%d살) 수강과목 %s\n", s1.name, s1.age, s1.subject);
    return 0;
}
