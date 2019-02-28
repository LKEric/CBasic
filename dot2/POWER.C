#include <stdio.h>
#include <conio.h>
unsigned long tinh(int d,int x)
{
    unsigned long s;
    s=1;
    int i;   
    for(i=1;i<=d;i++)
    {
        s=s*x;
    } 
    return s;
}
int main()
{
    int d,x;
    printf("Enter a number: ");
    scanf("%d",&x);
    printf("Enter a power: ");
    scanf("%d",&d);
    printf(">> Output %d^%d = %d",x,d,tinh(d,x));
    getch();
    return 0;
}