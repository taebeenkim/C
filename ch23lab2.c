// ch23lab2.c

#include <stdio.h>

struct book
{
    char title[30];
    char author[30];
    int price;
};

int main()
{
    int i;
    struct book b[3];

    for(i = 0; i < 3; i++)
    {
        printf("%d��° å�� ������? ", i + 1);
        //scanf("%s",b[i].title);
        gets(b[i].title);
        printf("å�� �۰���? ");
        //scanf("%s",b[i].author);
        gets(b[i].author);
        printf("å�� ������? ");
        scanf("%d", &b[i].price);

        getchar();
    }

    printf("------------å�� ����------------");
    for(i = 0; i < 3; i++)
    {
        printf("#%d:\"%s\" by %s %d��\n", i + 1, b[i].title, b[i].author, b[i].price);
    }
    return 0;
}


