// ch21ex2.c
// 영화 평점 출력하기

#include <stdio.h>

int main()
{
    int i;
    char ans;
    int movie_rating[5];

    // Mission impossible, incredible, avengers, frozen, big hero
    // movies배열 생성

    char *movies[5] = {
        "Mission impossible",
        "incredible",
        "avengers",
        "frozen",
        "big hero"
    };

    // movies 배열 출력

    for (i = 0; i < 5; i++)
    {
        // puts(movies[i]);
        // 00 영화를 보셨나요?(Y/N)
        printf("%s 영화를 보셨나요?(Y/N) ", movies[i]);
        scanf(" %c", &ans);

        // y인 경우 '평점을 매겨주세요(1~10점): '
        if(toupper(ans) == 'Y')
        {
            printf("평점을 매겨주세요(1~10점): ");
            scanf("%d", &movie_rating[i]);
        } else {
            movie_rating[i] = -1;
        }
    }
    puts("---------------------------------------");
    // 평점이 있는 영화만 출력하기
    for (i = 0; i < 5; i++)
    {
        if(movie_rating[i] > 0)
        {
            printf("영화 %s는 평점이 %d입니다. \n", movies[i], movie_rating[i]);
        }
    }
    return 0;
}
