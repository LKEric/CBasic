#include <stdio.h>
#include <conio.h>

int main()
{
    
    float x,v,s,p;
    scanf("%f",&x);
    s=x*x*3.14;
    p=x*2*3.14;
    v=3.14*x*x*x*4/3;
    printf("\n%.2f",p);
    printf("\n%.2f",s);
    printf("\n%.2f",v);
    getch();
    return 0;
}