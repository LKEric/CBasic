#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    int n,x;
    scanf("%d",&x);
    n=sqrt(x);
    if ( n*n==x )
        {printf("%d * %d",n,n);}
    else printf("false");
    getch();
    return 0;

}