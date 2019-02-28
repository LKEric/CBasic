#include <stdio.h>
#include <conio.h>

int main()
{
    int x,s;
    s=0;
    do
    {
        printf("Enter number: ");
        scanf("%d",&x);
        s=s+x;
    } while(x!=0);
    printf("Sum: %d",s);
    getch();
    return 0;
}