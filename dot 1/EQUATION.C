#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    int a,b,c,n,d;
    float x,y;
    printf("BAn muon giai phuong trinh bac 1 hay 2? ");
    scanf("%d",&n);
    switch(n)
    {    
        case 1: 
            printf("\nNhap phuong trinh bac 1 dang ax+b=0");
            printf("\nNhap so nguyen a, b: ");
            scanf("%d%d",&a,&b);
            if (a!=0 )
            {
                x=-(b*1.0)/a;
                
                printf("\nPhuong trinh co nghiem la: %.2f",x);
            }
            else if (a==b && b==0)
            {
                printf("\nPhuong trinh co vo so nghiem");
            }
            else printf("\nPhuong trinh vo nghiem");
            break;
        case 2:
            printf("\nNhap phuong trinh bac 2 dang ax^2+bx+c=0");
            printf("\nNhap so nguyen a, b, c: ");
            scanf("%d%d%d",&a,&b,&c);
            d=b*b-4*a*c;
            if (d>0)
            {
                x=(-b+sqrt(d))/(2.0*a);
                y=(-b-sqrt(d))/(2.0*a);
                printf("\nPhuong trinh co 2 nghiem la: %.2f,%.2f",x,y);
            }
            else if (d=0)
            {
                x= -b/(2*a);
                printf("\nPhuong trinh co nghiem kep la: %.2f",x); 
            }
            else 
            {
                printf("\nPhuong trinh vo nghiem.");
            }
            break;
    }    
    getch();
    return 0;

        
}