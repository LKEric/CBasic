#include <stdio.h>
#include <conio.h>

int main()
{
    int y,m;
    printf("Enter year: ");scanf("%d",&y);
    printf("Enter month: ");scanf("%d",&m);
    switch(m)
    {
        case 1: printf("Thang 1 co 31 ngay va thuoc quy I");
            break;
        case 2: 
        if ((y % 4 ==0) && (y % 100 != 0))
            {printf("Thang 2 co 29 ngay va thuoc quy I");}
        else printf("Thang 2 co 28 ngay va thuoc quy I");
            break; 
        case 3: printf("Thang 3 co 31 ngay va thuoc quy I");
            break;
        case 4: printf("Thang 4 co 30 ngay va thuoc quy I");
            break;
        case 5: printf("Thang 5 co 31 ngay va thuoc quy II");
            break;
        case 6: printf("Thang 6 co 30 ngay va thuoc quy II");
            break;
        case 7: printf("Thang 7 co 31 ngay va thuoc quy II");
            break;
        case 8: printf("Thang 8 co 31 ngay va thuoc quy II");
            break;
        case 9: printf("Thang 9 co 30 ngay va thuoc quy III");
            break;
        case 10: printf("Thang 10 co 31 ngay va thuoc quy III");
            break;
        case 11: printf("Thang 11 co 30 ngay va thuoc quy III");
            break;
        case 12: printf("Thang 12 co 31 ngay va thuoc quy III");
            break;
    };
    getch();
    return 0;
}