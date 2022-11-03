#include <stdio.h>

int main ()
{
    char firstname [30];
    char secondname [30];

    printf("Type your first name: \n");
    scanf("%s",firstname);
    printf("Type your second name: \n");
    scanf("%s",secondname);
    printf("Pleased to meet you, %s %s.\n",firstname,secondname);
    return 0;
}