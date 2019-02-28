#include <stdio.h>
#include <conio.h>

int main()
{
    int s,x,i;
    s=0;
    printf("Enter number: ");
    scanf("%d",&x);
    while (x!=0)
    {
        i=x%10;
        x=x/10;
        s=s+i;
    }
    printf("Sum of digits: %d",s);
    getch();
    return 0;
}