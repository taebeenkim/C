// ch24ex1.c

#include <stdio.h>

void func_g();

int gv;

int main()
{
    int lv1 = 10;
    int x = 5;

    gv = 100;
    printf("gv: %d, lv1: %d, x: %d\n", gv,lv1, x);
    func_g();
    printf("gv: %d, lv1: %d, x: %d\n", gv,lv1, x);

    return 0;
}

void func_g()
{
    int lv2 = 5;
    int x = 7;
    gv = 200;
    printf("gv: %d, lv2: %d, x: %d\n", gv,lv2, x);
}
