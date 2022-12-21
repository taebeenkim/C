// ch23lab3.c
 #include <stdio.h>

 struct time

{
    int hour;
    int minute;
    int secound;
};

int main()
{
    struct time st;
    struct time et;
    struct time dt;

    printf("시작 시간(시 분 초): ");
    scanf("%d %d %d", &st.hour, &st.minute, &st.secound);
    printf("종료 시간(시 분 초): ");
    scanf("%d %d %d", &et.hour, &et.minute, &et.secound);

    if(et.secound < st.secound)
    {
        et.minute -= 1;
        et.secound += 60;
    }
    if(et.minute < st.minute)
    {
        et.hour -= 1;
        et.minute += 60;
    }

    dt.secound = et.secound - st.secound;
    dt.minute = et.minute - st.minute;
    dt.hour = et.hour - st.hour;

    printf("시간 차이: %d: %d: %d", dt.hour, dt.minute, dt.secound);

    return 0;
}





