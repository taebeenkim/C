// ch13ex2.c
// ¦���� ����ϱ�

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
