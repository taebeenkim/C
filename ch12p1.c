//ch13p1.c
// 3회 반복하기

#include <stdio.h>

int main()
{
    int cnt = 1;

    while(cnt <= 3)
    {
        printf("C언어 수업중!\n");
        cnt++;
    }

    cnt = 1;
    while(cnt <11)
    {
        printf("cnt: %d\n", cnt);
        cnt += 2;
    }

    return 0;
}
