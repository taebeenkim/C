// ch14p2.c
//1~100���� �� ���ϱ�

#include <stdio.h>

int main()
{
    int i;
    int s = 0;

    for(i = 1; i <= 5; i++) {
        s += i;
        printf("i: %d, s: %d\n", i, s);
    }

    return 0;
}
