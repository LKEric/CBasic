#include <stdio.h>
#include <conio.h>

int main()
{
    unsigned long s;
    int i,x;
    s=1;
    printf("Enter number: ");
    scanf("%d",&x);
    printf("Result: ");
    for (i=1;i<=x;i++)
    {
        printf("%d",i);
        s=s*i;
        if (i!=x) printf("x");
    }
    printf(" = %d",s);
    getch();
    return 0;
}