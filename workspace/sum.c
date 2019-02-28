#include <stdio.h>
#include <conio.h>

int main()
{
    int i,n,x,k;
    printf("Nhap n: ");
    scanf("%d",&n);
    x=0;
    for (i=1;i<=n;i++)
    {
        printf("\nNhap so thu %d: ",i);
        scanf("%d",&k);
        x+=k;
    }
    printf("\nTong cua %d so la: %d",n,x);
    getch();
    return 0;
}