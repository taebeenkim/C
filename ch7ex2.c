// ch7ex2.c
// �������� ������ ���

#include <stdio.h>

int main()
{

    int a = 10, b = 3;
    float x = 10.0, y = 3.0;

    int i_res;
    float f_res;

    // �Ǽ� ������
    f_res = x / y;
    printf("f_res: %.1f\n", f_res);

    // �Ǽ��� ���� ������
    f_res = x / b;
    printf("f_res: %.1f\n", f_res);

    // �Ǽ��� ���� ������
    i_res = x / b;
    printf("i_res: %d\n", i_res);

    // ���� ������
    f_res = a / b;
    printf("f_res: %.1f\n", f_res);

    return 0;
}
