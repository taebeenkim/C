// ch7ex2.c
// ³ª´°¼À°ú ¿©¶ó°¡Áö °æ¿ì

#include <stdio.h>

int main()
{

    int a = 10, b = 3;
    float x = 10.0, y = 3.0;

    int i_res;
    float f_res;

    // ½Ç¼ö ³ª´°¼À
    f_res = x / y;
    printf("f_res: %.1f\n", f_res);

    // ½Ç¼ö¿Í Á¤¼ö ³ª´°¼À
    f_res = x / b;
    printf("f_res: %.1f\n", f_res);

    // ½Ç¼ö¿Í Á¤¼ö ³ª´°¼À
    i_res = x / b;
    printf("i_res: %d\n", i_res);

    // Á¤¼ö ³ª´°¼À
    f_res = a / b;
    printf("f_res: %.1f\n", f_res);

    return 0;
}
