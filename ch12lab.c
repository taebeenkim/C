// ch12lab2.c

#include <stdio.h>

int main()
{
    int n1 = 10;
    int n2 = 5;
    char op;

    printf("%d과 %d의 연산을 선택하세요(+,-,*,/,%%): ",n1, n2);
    scanf("%d", &op );

    switch(op)
    {
    case '+' :
        printf("%d %c %d는 %d 입니다.", n1, op, n2, n1 + n2);
        break;
    case '-' :
        printf("%d %c %d는 %d 입니다.", n1, op, n2, n1 - n2);
        break;
    case '*' :
        printf("%d %c %d는 %d 입니다.", n1, op, n2, n1 * n2);
        break;
    case '/' :
        printf("%d %c %d는 %d 입니다.", n1, op, n2, n1 / n2);
        break;
    case '%' :
        printf("%d %c %d는 %d 입니다.", n1, op, n2, n1 % n2);
        break;

    default:
        printf("잘못된 기호입니다.");
    }
    return 0;
}
