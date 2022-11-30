// ch17lab1.c

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i;
    int s = 0;
    int c = 0;
    int avg;
    int score[10];

    srand(time(NULL));

    for(i = 0; i < 10; i++)
    {
        score[i] = rand() % 100;
        printf("%d ", score[i]);
    }
    printf("\n");

    for (i = 0; i < 10; i++)
    {
        s += score[i];
        c++;
    }
    avg = (float)s / c;
    printf("ЦђБе: %.1f\n", avg);

    return 0;
}

