// ch9ex1.c
// 나이 계산 프로그램

#define CURRENT_YEAR 2022


# include <stdio.h>

int main()
{
    int year;
    int age;

    printf("몇 년도에 태어나셨습니까? ");
    scanf("%d", &year);

    if(year > CURRENT_YEAR) {
        printf("잘못된 연도입니다.\n");
    } else {
        age = (CURRENT_YEAR - year) + 1;
        printf("현재 %d살이시군요!\n");
        if(year % 400 == 0) {
            printf("윤년에 태어나셨네요!\n");
        }
    }

    return 0;
}
