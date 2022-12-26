// ch24lab1.c
#include <stdio.h>

void add();

int n1;
int n2;
int r;

int main()
{

    add();
    printf("µ¡¼ÀÇÒ µÎ °³ÀÇ Á¤¼ö ÀÔ·Â: ");
    scanf("%d %d", &n1, &n2);
    printf("µ¡¼À °á°ú: 8");


    return 0;
}

void add()
{
    r = n1 + n2;
}
