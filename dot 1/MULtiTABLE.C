#include <stdio.h>
#include <conio.h>

int main()
{
    int x,i;
    printf("Enter a number: ");
    scanf("%d",&x);  
    for (i=1;i<=10;i++)
    printf("\n%dx%d=%d",x,i,x*i);
    getch();
    return 0;
}