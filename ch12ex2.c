// ch12ex2.c

#include <stdio.h>

int main()
{
    char grade;

    printf("학점을 입력하세요(A~F): ");
    scanf("%c", &grade);

    switch(grade)
    {
    case 'A': case 'a':
        printf("90~100점");
        break;
    case 'B': case 'b':
        printf("80~89점");
        break;
    case 'C': case 'c':
        printf("70~79점");
        break;
    case 'D': case 'd':
        printf("60~69점");
        break;
    case 'E': case 'F': case 'e': case 'f':
        printf("0~59점");
        break;
    default:
        printf("입력오류!");
    }
    return 0;
}

