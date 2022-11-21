// ch12lab1.c

#include <stdio.h>

int main()
{
    int num;

    printf("1~5사이의 정수를 입력하세요: ");
    scanf("%d", &num);

    switch(num)
    {
    case 1 :
        printf("%d is One", num);
        break;
    case 2:
        printf("%d is Two", num);
        break;
    case 3:
        printf("%d is Three", num);
        break;
    case 4:
        printf("%d is Four", num);
        break;
    case 5:
        printf("%d is Five", num);
        break;

    default:
        printf("입력오류!");
    }

    return 0;
}
