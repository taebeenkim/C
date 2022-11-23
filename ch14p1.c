// ch14p1.c
// 1~5 출력

#include <stdio.h>

int main()
{
    int i;

    for(i = 1; i <= 5; i++) {
        printf("i = %d\n", i);
    }

    printf("-------------------\n");
    // 5~1까지 출력
    for(i = 5; i <= 1; i--) {
        printf("i = %d\n", i);
    }

    printf("-------------------\n");
    // 2~10까지 짝수 출력
    for(i = 2; i <= 10; i+=2) {
        printf("i = %d\n", i);
    }

    printf("-------------------\n");
    // 9~1까지 홀수 출력
    for(i = 9; i <= 1; i-= 2) {
        printf("i = %d\n", i);
    }
    printf("for 문 종료 후 i: %d\n", i);
    return 0;
}
