#include <stdio.h>
#include <conio.h>

int main()
{
    int x,i;
    unsigned long s,d;
    s=0;
    d=0;
    printf("Enter number: ");
    scanf("%d",&x);
    printf("Sum of series: ");
    for (i=1;i<=x;i++)
    {
        d=d*10+3;
        s=s+d; 
        printf("%d",d);
        if (i!=x) printf(" + ");
    }
    printf(" = %d",s);
    getch();
    return 0;

}