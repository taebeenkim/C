// ch21p2.c
// 문자포인터 배열

#include <stdio.h>

int main()
{
    int i;
    char *subject[] = {
        "English",
        "Math",
        "History",
        "Science",
    };

    for(i = 0; i < 4; i++)
    {
        printf("과목: %s\n", subject[i]);
    }

    return 0;
}
