// ch23ex3.c
// 구조체 배열 입력 받기

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
        printf("학생이름: ");
        // scanf("%s", st[i].name);
        gets(st[i].name);
        printf("수강과목: ");
        // scanf("%s", st[i].subject);
        gets(st[i].subject);
        printf("학생나이: ");
        scanf("%d", &st[i].age);

        getchar(); // 한 문자 입력
    }

    printf("\n----------- 수강 등록 --------\n");
    printf("이름\t과목\t나이\n");
    for(i = 0; i < 3; i++)
    {
        printf("%s\t%s\t%d\n", st[i].name, st[i].subject, st[i].age);
    }

    return 0;
}
