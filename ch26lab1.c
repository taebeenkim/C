// ch26lab1.c

#include <stdio.h>

int main()
{
    int x, y;
    int l;

    printf("�� ���� �Է��ϼ���: ");
    scanf("%d %d", &x, &y);

    l = large(x, y);
    printf("�� �� �߿� ū ���� %d�Դϴ�.\n", l);

    return 0;

}

int large(int x, int y)
{
    //if(x > y)
        //return x;
    //return y;
    return (x > y) ? x : y;
}
