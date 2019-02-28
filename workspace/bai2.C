#include <stdio.h>
#include <conio.h>

int main()
{
    int n,m,i,j,s,d;
    printf("Nhap n,m voi mang co dang n*m: ");
    scanf("%d%d",&n,&m);
    int a[n][m];
    s=0;
    d=0;
    for (i=0;i<n;i++)
        for (j=0;j<m;j++)
        {
            printf("Nhap a[%d][%d]: ",i,j);
            scanf("%d", &a[i][j]);
            if (a[i][j] %5==0)
            {
                s=s+a[i][j];
                d++;
            }
        }
    if (d==0)
    {
        printf("\nkhong co so nao chia he cho 5");
    }
    else printf("\nTong cac so chia het cho 5: %d",s);
    getch();
    return 0;

}