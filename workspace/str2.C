#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
    int d,i;
    char a[100],b[100];
    gets(a);
     
    d=strlen(a);
     for (i=0;i<d;i++)
    {
        b[d-1-i]=a[i];
    }
    b[d] = '\0';
    puts(b);
    getch();
    return 0;
}