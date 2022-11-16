// ch9lab4.c

#include <stdio.h>

int main()
{
    int h;
    int m;

    printf("현재 시간을 입력하세요: ");
    scanf("%d:%d", &h, &m);

    // 입력된 분 값이 30보다 작으면 시간에서 빌려온다.
    if(m < 30) {
        h -= 1; // h = h - 1;
        m += 60; // m = m + 30;
    }

    m = m - 30;
    printf("30분 전은 %d:%d\n", h, m);

    return 0;

}
