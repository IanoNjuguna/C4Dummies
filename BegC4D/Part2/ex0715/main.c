#include <stdio.h>

int main()
{
    float fav;

    printf("What is your favourite floating-point value: ");
    scanf("%f",&fav);
    printf("%f is my favourite floating-point value, too!\n",&fav);
    return 0;
}