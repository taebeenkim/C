// ch23ex2.c
// 구조체 배열

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
        {"홍길동", "수학", 20},
        {"김철수", "영어", 21},
        {"홍길동", "국어", 22}
    };

    strcpy(st[0].subject, "C언어");
    strcpy(st[1].subject, "PYTHON");
    strcpy(st[2].subject, "JAVA");

    printf("이름\t과목\t나이\n");
    for(int i = 0; i < 3; i++)
    {
        printf("%s\t%s\t%d\n", st[i].name, st[i].subject, st[i].age);

    }
    return 0;
}
