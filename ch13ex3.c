// ch13ex3.c
// 정수 합 구하기

#include <stdio.h>

int main()
{
    int n1, n2;
    char choice;

    do {
        printf("2개의 정수를 입력하세요: ");
        scanf("%d %d", &n1, &n2);

        printf("%d + %d = %d\n", n1, n2, n1 + n2);

        printf("계속 덧셈을 할까요?(Y/N): ");
        scanf(" %c", &choice);
    } while(choice == 'Y' || choice == 'y');

    return 0;
}
