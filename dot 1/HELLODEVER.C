#include <stdio.h>

int main()
{
    char x[30];
    printf("Enter your name: ");
    gets(x);
    printf("%s is a member of FU-Dever!",x);
    getchar();
    return 0;
}