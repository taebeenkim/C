//ch13p1.c
// 3ȸ �ݺ��ϱ�

#include <stdio.h>

int main()
{
    int cnt = 1;

    while(cnt <= 3)
    {
        printf("C��� ������!\n");
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
