//ch11lab1.c

#include <stdio.h>

int main()
{
    int n,m;
    printf("���� �� ���� �Է��ϼ���: ");
    scanf("%d, %d", &n, &m);

    printf("%d", n > m ? n - m : m - n);

    return 0;
}
