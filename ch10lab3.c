// ch10lab3.c

#include <stdio.h>

int main()
{
    int year;
    printf("�⵵�� �Է��ϼ���: ");
    scanf("%d", &year);

    if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("�����̳׿�");
    } else {
        printf("������ �ƴϳ׿�");

    }

    return 0;
}
