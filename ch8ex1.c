// ch8ex1.c
// 복함연산자

#include <stdio.h>

int main()
{
    int cnt = 0;

    cnt += 1;

    printf("cnt: %d\n", cnt);
    printf("cnt: %d\n", cnt + 1);
    printf("cnt: %d\n", cnt += 1);

    cnt += 2;
    printf("cnt: %d\n", cnt);

    cnt -= 1;
    printf("cnt: %d\n", cnt);    printf("cnt: %d\n", cnt -= 2);


    return 0;
}
