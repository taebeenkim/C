// ch13lab1.c

#include <stdio.h>

int main()
{
    int cnt = 1;
    int n;

    while (cnt < 4)
    {
        printf("%d번째 정수를 입력하세요: ", cnt);
        scanf("%d", &n);

        printf("입력된 정수는 %d입니다. \n", n);
        cnt++;

    }

    return 0;
}
