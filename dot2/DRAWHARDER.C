#include <stdio.h>
#include <conio.h>

int main()
{
    int i,j,n,x;
    printf("Enter number n: ");
    scanf("%d",&n);
    for (i=n;i>=1;i--)
    {
        for (j=i;j>=1;j--)
        printf("*");
        printf("\n");
    }
    printf("\n");
    for (i=1;i<=n;i++)
    {
        for (x=1;x<=n-i;x++)
        printf(" ");
        for (j=1;j<=i;j++)
        printf("*");
        printf("\n");
    }
    printf("\n");
    for (i=1;i<=n;i++)
    {
        for (x=1;x<=n-i;x++)
        printf(" ");
        for (j=1;j<=i;j++)
        printf("* ");
        printf("\n");
    }
    printf("\n");
    for (i=n;i>=1;i--)
    {
        for (x=n-i;x>=1;x--)
        printf(" ");
        for (j=i;j>=1;j--)
        printf("* ");
        printf("\n");
    }
    
    getch();
    return 0;
}