// ch21ex1.c
// 문자포인터 배열

#include <stdio.h>

int main()
{
    int i;

    char movie1[50];
    char movie2[50];
    char movie3[50];
    char movie4[50];
    char movie5[50];
    char *movies[5] = {movie1, movie2, movie3, movie4, movie5};

    for(i = 0; i < 5; i++)
    {
        printf("%d. 영화제목을 입력하세요: ", i + 1);
        gets(movies[i]);
    }

    for(i = 0; i < 5; i++)
    {
        puts(movies[i]);
    }
    return 0;

}
