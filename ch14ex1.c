// ch14ex1.c
// 입력된 정수 중 최대값 찾기

#include <stdio.h>

int main()
{
    int i, n;
    int max = 0;
    int min = 999;
    int max_i;
    int min_i;

    for(i = 0; i < 5; i++)
    {
        printf("%d번째 정수를 입력하세요(1~100): ", i + 1);
        scanf("%d", &n);

        if(n > max) max = n;
        {
            max = n;
            max_i = i + 1;
        }
        if(n < min)
        {
            min = n;
            min_i = i + 1;
        }
    }
    printf("최대값: %d번째 입력 수 %d\n", max_i, max);
    printf("최소값: %d번째 입력 수 %d\n", min_i, min);
    return 0;
}
