// ch21ex2.c
// ��ȭ ���� ����ϱ�

#include <stdio.h>

int main()
{
    int i;
    char ans;
    int movie_rating[5];

    // Mission impossible, incredible, avengers, frozen, big hero
    // movies�迭 ����

    char *movies[5] = {
        "Mission impossible",
        "incredible",
        "avengers",
        "frozen",
        "big hero"
    };

    // movies �迭 ���

    for (i = 0; i < 5; i++)
    {
        // puts(movies[i]);
        // 00 ��ȭ�� ���̳���?(Y/N)
        printf("%s ��ȭ�� ���̳���?(Y/N) ", movies[i]);
        scanf(" %c", &ans);

        // y�� ��� '������ �Ű��ּ���(1~10��): '
        if(toupper(ans) == 'Y')
        {
            printf("������ �Ű��ּ���(1~10��): ");
            scanf("%d", &movie_rating[i]);
        } else {
            movie_rating[i] = -1;
        }
    }
    puts("---------------------------------------");
    // ������ �ִ� ��ȭ�� ����ϱ�
    for (i = 0; i < 5; i++)
    {
        if(movie_rating[i] > 0)
        {
            printf("��ȭ %s�� ������ %d�Դϴ�. \n", movies[i], movie_rating[i]);
        }
    }
    return 0;
}
