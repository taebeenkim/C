// ch13ex2.c
// 짝수만 출력하기

#include <stdio.h>

int main()
{
    int cnt = 1;

    while(cnt < 11)
    {
        if(cnt % 2 == 0) printf("%d ", cnt);

        cnt++;
    }

    return 0;
}
