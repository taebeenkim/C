// ch9lab3.c
 #include <stdio.h>

 int main()
 {
     int t;

     printf("현재 시간을 입력하세요. ");
     scanf("%d", &t);

     if(t <= 10) {
        printf("Good morning");
     } else if (t <= 20 ) {
        printf("Good day");
     } else {
        printf("Good evening");
     }
     return 0;
 }
