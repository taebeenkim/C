// ch17lab2.c

# include <stdio.h>
# include <stdlib.h>
# include <time.h>

int main()
{
    int i;
    int max, min;
    int n[10];

    srand(time(NULL)); // 난수 시드값 초기화

    for (i = 0; i < 10; i++)
    {
        n[i] = rand() % 100;
        printf("%d ", n[i]);
    }
    printf("\n\n");

    for(i = 0; i <10; i++)
    {
        if(n[i] > max) max = n[i];
        if(n[i] < min) min = n[i];
    }
    printf("최대값은 %d, 최솟값은 %d입니다.\n",
           max, min);

    return 0;
}

