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
        printf("%d번째 책의 제목은? ", i + 1);
        //scanf("%s",b[i].title);
        gets(b[i].title);
        printf("책의 작가는? ");
        //scanf("%s",b[i].author);
        gets(b[i].author);
        printf("책의 가격은? ");
        scanf("%d", &b[i].price);

        getchar();
    }

    printf("------------책의 정보------------");
    for(i = 0; i < 3; i++)
    {
        printf("#%d:\"%s\" by %s %d원\n", i + 1, b[i].title, b[i].author, b[i].price);
    }
    return 0;
}


