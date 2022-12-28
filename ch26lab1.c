// ch26lab1.c

#include <stdio.h>

int main()
{
    int x, y;
    int l;

    printf("두 수를 입력하세요: ");
    scanf("%d %d", &x, &y);

    l = large(x, y);
    printf("두 수 중에 큰 값은 %d입니다.\n", l);

    return 0;

}

int large(int x, int y)
{
    //if(x > y)
        //return x;
    //return y;
    return (x > y) ? x : y;
}
