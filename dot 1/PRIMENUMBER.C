#include <stdio.h>
#include <conio.h>

int kt(int n)
{
    int i;
    if (n<2) return 0;
    for (i=2; i<=n-1; i++)
    {
        if (n % i==0) return 0;
    }
    return 1;
}
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if (kt(n) == 1 )
        {printf("This is a prime number.");}
    else printf("This is not a prime number."); 
    getch();
    return 0;  
}