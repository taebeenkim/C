// ch19lab1_2.c

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    int i;
    char pwd[20];
    int has_upper = 0, has_lower = 0, has_digit = 0;

    puts("��ȣ�� �����ϼ���: ");
    gets(pwd);

    for(i = 0; i < strlen(pwd); i++)
    {
        if(isdigit(pwd[i])) {
            has_digit = 1;
            continue;
        }
        if(isupper(pwd[i])) {
            has_upper = 1;
            continue;
        }
        if(islower(pwd[i])) {
            has_lower = 1;
        }
    }

    if(has_digit && has_upper && has_lower)
        printf("\n��ȣ�� �����մϴ�.\n");
    else
        printf("\n��ȣ�� �ٽ� ������ּ���.\n");

    return 0;
}
