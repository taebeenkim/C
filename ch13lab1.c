// ch13lab1.c

#include <stdio.h>

int main()
{
    int cnt = 1;
    int n;

    while (cnt < 4)
    {
        printf("%d��° ������ �Է��ϼ���: ", cnt);
        scanf("%d", &n);

        printf("�Էµ� ������ %d�Դϴ�. \n", n);
        cnt++;

    }

    return 0;
}
