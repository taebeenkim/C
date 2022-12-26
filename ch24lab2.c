// ch24lab2.c

#include <stdio.h>

int add(int n1, int n2);

int main()
{
    int n1;
    int n2;
    int r;

    r = add(n1, n2);

    printf("µ¡¼ÀÇÒ µÎ°³ÀÇ Á¤¼ö ÀÔ·Â: ");
    scanf("%d %d", &n1, &n2);

    r = add(n1, n2);
    printf("µ¡¼À °á°ú: %d\n", r);
    return 0;
}

int add(int n1, int n2)
{
    int r;
    r = n1 + n2;
    return r;
}
