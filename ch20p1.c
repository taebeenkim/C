// ch20p1.c
// Æ÷ÀÎÅÍ

#include <stdio.h>

int main()
{
    int age = 19;
    int *pAge;

    pAge = &age;

    printf("age: %d, age addr: %p\n", age, &age);
    printf("pAge: %d, pAge addr: %p\n", *pAge, pAge);

    age = 29;
    printf("age: %d, age addr: %p\n", age, &age);
    printf("pAge: %d, pAge addr: %p\n", *pAge, pAge);

    *pAge = 39;
    printf("age: %d, age addr: %p\n", age, &age);
    printf("pAge: %d, pAge addr: %p\n", *pAge, pAge);

    return 0;
}
