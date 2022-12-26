// ch24ex2.c

#include <stdio.h>

void name_card();

int main()
{
    int i;
    for(i = 0; i < 5; i++)
    {
        name_card();
        printf("\n");
    }
}

void name_card()
{
    printf("-------------\n");
    printf(" ÆòÃÌ¾ÆÀÌÆ¼ \n");
    printf("www.pitca.co.kr\n");
    printf("-------------\n");
}
