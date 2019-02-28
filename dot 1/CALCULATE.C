#include <stdio.h>
#include <conio.h>

int main()
{
    int x,y;
    long a;
    char d;
    printf("Enter 1st number: ");
    scanf("%d",&x);
    printf("Enter 2nd number: ");
    scanf("%d",&y);
    printf("Enter operand: ");
    scanf("\n");
    scanf("%c",&d);
    if (d=='+')
    { 
        a=x+y;
    }
    else if(d=='-')
    {
        a=x-y;
    }
    else if (d=='*')
    {
        a=x*y;
    }
    else if (d=='/')
    {
        a=x/y;
    }
    else if (d=='%')
    {
        a=x%y;
    };
    printf("The result of: %d %c %d = %d",x,d,y,a);
    getch();
    return 0;

}