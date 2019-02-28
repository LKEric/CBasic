#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    int a,b,c,p,s;
    scanf("%d%d%d",&a,&b,&c);
    if ((a+b>c)&&(a+c>b)&&(b+c>a))
        {
            p=a+b+c;
            printf("Perimeter: %d",p);
            p=p/2;
            s=sqrt(p*(p-a)*(p-b)*(p-c));
            printf("\nArea: %d",s);
        }
    else printf("Not a triangle");
    getch();
    return 0;
}