// ch7ex3.c
// ��� ���ϱ�

#include <stdio.h>

int main()
{
    int kor, eng, mat, sci;
    int sum;
    float avg;

    printf("����, ����, ����, ���� ������ ������� �Է��ϼ���: ");
    scanf("%d %d %d %d", &kor, &eng, &mat, &sci);

    // avg = (kor + eng + mat + sci) \ 4.0;
    sum = kor + eng + mat + sci;
    avg = (sum) / 4;
    printf ("\n4���� ����� %.1f���Դϴ�.\n", avg);

    return 0;
}
