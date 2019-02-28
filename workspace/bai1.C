#include <stdio.h>
#include <conio.h>

int main()
{
    int s,sc,d,i,k,x;
    printf("Nhap do dai mang: ");
    scanf("%d",&x);
    int a[x+1];
    s=0;
    sc=0;
    d=0;
    for (i=0;i<=x-1;i++)
    {
        printf("Nhap a[%d]: ",i);
        scanf("%d",&a[i]);
        s=s+a[i];
    }
    printf("\ncac so le trong mang la: ");
    for (i=0;i<=x-1;i++)
    {
        if (a[i]%2==1) 
        {
            printf("%d ",a[i]);
        }
        else 
        {
            d++;
            sc=sc+a[i];
        }
    }
    printf("\nTong ca so chan: %d",sc );
    printf("\nso luong so chan trong mang: %d",d);
    printf("\nNhap so dc them vao mang: ");
    scanf("%d",&a[x]);
    printf("\nNhap vi tri phan tu can xoa: ");
    scanf("%d",&k);
    for (i=k;i<=x;i++)
    {
        a[i]=a[i+1];
    }
    printf("\nMang sau khi thay doi: ");
    for (i=0;i<=x-1;i++)
    {
        printf("%d ",a[i]);
    }
    getch();
    return 0;

}