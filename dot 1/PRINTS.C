#include <stdio.h>
#include <conio.h>

int main()
{
    int x;
    float y;
    char c;
    printf("Enter an int: ");
    scanf("%d",&x);
    printf("\nEnter a float: ");
    scanf("%f",&y);
    printf("\nEnter a character: ");
    scanf("%s",&c);
    printf("\n>> You entered: ");
    printf("\n%d as an integer;",x);
    printf("\n%.6f as a float;",y);
    printf("\nand \"%c\" as a character.",c);
    getch();
    return 0;
}