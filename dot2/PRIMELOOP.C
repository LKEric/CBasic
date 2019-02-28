#include <stdio.h>
#include <conio.h>

int check(int x)
{
    
    int i,d;
    for (i=2;i<x;i++)
    {
        if (x%2==0)
        {
            return 0;
            break;
        }
    }
    return 1;
}
int main()
{
    int x;
    printf("Enter number: ");
    scanf("%d",&x);
    if (check(x))
    {
        printf(">> It is prime number");
    } 
    else printf(">> It isn't prime number");
    getch();
    return 0;
}