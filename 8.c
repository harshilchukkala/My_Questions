#include <stdio.h>

int main(void)
{
    printf("ASCII value of a character\n");
    char c;
    printf("Provide the Character : ");
    c = getchar();

    printf("The ASCII value of the character %c is %d",c,c);
    return 0;
}