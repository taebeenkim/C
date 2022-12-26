//ch25ex2.c
#include <stdio.h>
#include <string.h>

void change_msg(char msg[]);

int main()
{
    char msg[10] = "avengers";
    printf("%s\n", msg);

    change_msg(msg);
    printf("함수 호출 후 msg: %s\n", msg);

    return 0;
}

void change_msg(char msg[])
{
    strcpy(msg, "x-men");
}
