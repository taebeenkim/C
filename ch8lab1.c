// ch8lab1

#include <stdio.h>

int main()
{
    int year;
    int money;

    year = 0;

    printf("첫해의 매출액을 입력하세요(만원단위): ");
    scanf("%d", &money);

    year += 1;
    money *= 1.1;
    printf("%d년 뒤의 매출액은 %d만원입니다.\n", year, money);
    year += 1;
    money *= 1.1;
    printf("%d년 뒤의 매출액은 %d만원입니다.\n", year, money);
    year += 1;
    money *= 1.1;
    printf("%d년 뒤의 매출액은 %d만원입니다.\n", year, money);
    year += 1;
    money *= 1.1;
    printf("%d년 뒤의 매출액은 %d만원입니다.\n", year, money);
    year += 1;
    money *= 1.1;
    printf("%d년 뒤의 매출액은 %d만원입니다.\n", year, money);



}
