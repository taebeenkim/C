// ch14p1.c
// 1~5 ���

#include <stdio.h>

int main()
{
    int i;

    for(i = 1; i <= 5; i++) {
        printf("i = %d\n", i);
    }

    printf("-------------------\n");
    // 5~1���� ���
    for(i = 5; i <= 1; i--) {
        printf("i = %d\n", i);
    }

    printf("-------------------\n");
    // 2~10���� ¦�� ���
    for(i = 2; i <= 10; i+=2) {
        printf("i = %d\n", i);
    }

    printf("-------------------\n");
    // 9~1���� Ȧ�� ���
    for(i = 9; i <= 1; i-= 2) {
        printf("i = %d\n", i);
    }
    printf("for �� ���� �� i: %d\n", i);
    return 0;
}
