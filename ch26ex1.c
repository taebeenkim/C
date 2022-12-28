// ch26ex1.c

#include <stdio.h>

float cal_avg(int k, int e, int m);
int cal_sum(int k, int e, int m);

int main()
{
    int s;
    float avg;
    int kor, eng, mat;
    kor = 60;
    eng = 77;
    mat = 80;
    avg = cal_avg(kor, eng, mat);
    s = cal_sum(kor, eng, mat);
    printf("±¹¾î: %d, ¿µ¾î: %d, ¼öÇÐ: %d\n", kor, eng, mat);
    printf("ÃÑÁ¡: %d\n", s);
    printf("Æò±Õ: %.1f\n", avg);
    return 0;
}

int cal_sum(int k, int e, int m)
{
    int s;
    s = k + e + m;
    return s;
}

float cal_avg(int k, int e, int m)
{
    float a;
    a = (k + e + m) / 3.0;
    return a;
}
