// ch10lab3.c

#include <stdio.h>

int main()
{
    int year;
    printf("년도를 입력하세요: ");
    scanf("%d", &year);

    if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("윤년이네요");
    } else {
        printf("윤년이 아니네요");

    }

    return 0;
}
