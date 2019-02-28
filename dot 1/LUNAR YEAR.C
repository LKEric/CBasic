#include <stdio.h>
#include <conio.h>

int main()
{
    int x;
    printf("Enter year: ");
    scanf("%d",&x);
    printf("\n");
    if (x>100) 
    {
        switch(x % 10)
        {
            case 0: printf("Canh ");
                break;
            case 1: printf("Tan ");
                break;
            case 2: printf("Nham ");
                break;
            case 3: printf("Quy ");
                break;
            case 4: printf("Giap ");
                break;
            case 5: printf("At ");
                break;
            case 6: printf("Binh ");
                break;
            case 7: printf("Dinh ");
                break;
            case 8: printf("Mau ");
                break;
            case 9: printf("Ky ");
                break;
        };
        switch(x % 12)
        {
            case 4: printf("Ty");
                break;
            case 5: printf("Suu");
                break;
            case 6: printf("Dan");
                break;
            case 7: printf("Mao");
                break;
            case 8: printf("Thin");
                break;
            case 9: printf("Ty");
                break;
            case 10: printf("Ngo");
                break;
            case 11: printf("Mui");
                break;
            case 0: printf("Than");
                break;
            case 1: printf("Dau");
                break;
            case 2: printf("Tuat");
                break;
            case 3: printf("Hoi");
                break;
        };
    }
    else printf("Invalid year");
    getch();
    return 0;
}