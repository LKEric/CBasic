#include <stdio.h>
#include <conio.h>
int main()
{
    int x,d;
    d=0;
    
    do
    {
        printf("\nNhap x: ");
        scanf("%d",&x);
        if (x<=10||x>=100) 
        {
            d++;
            printf("Ban da nhap sai %d lan",d);
        }
    } while ((x<=10)||(x>=100)||(d>5));
    getch();
    return 0;
}