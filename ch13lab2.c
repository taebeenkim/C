//ch13lab2.c

#include <stdio.h>

int main()
{
    int n;
    int cnt = 1;
    int s = 0;

    printf("������ �Է��ϼ���: ");
    scanf("%d", &n);

    while (cnt <= n)
    {
        s += cnt;
        cnt++;
        }



    printf("1~%d���� �հ�� %d.\n", n, s);

    return 0;
}
