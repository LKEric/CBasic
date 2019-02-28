#include <stdio.h>
#include <conio.h>

int main()
{
    int n,i;
    printf("Enter number n: ");
    scanf("%d",&n);
    printf(">> Odd number: ");
    for (i=1;i<=n;i++)
    {
        if (i%2==1) 
        printf("%d ",i);
    }
    getch();
    return 0;
}