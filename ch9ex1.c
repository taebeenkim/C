// ch9ex1.c
// ���� ��� ���α׷�

#define CURRENT_YEAR 2022


# include <stdio.h>

int main()
{
    int year;
    int age;

    printf("�� �⵵�� �¾�̽��ϱ�? ");
    scanf("%d", &year);

    if(year > CURRENT_YEAR) {
        printf("�߸��� �����Դϴ�.\n");
    } else {
        age = (CURRENT_YEAR - year) + 1;
        printf("���� %d���̽ñ���!\n");
        if(year % 400 == 0) {
            printf("���⿡ �¾�̳׿�!\n");
        }
    }

    return 0;
}
