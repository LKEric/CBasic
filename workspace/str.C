#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
    int d,k,i;
    char st[100];
    gets(st);
    d=0;
    k=strlen(st);
    for(i=0;i<k/2;i++)
    {
        if (st[i]==st[k-i-1])
        {
            d++;

        }
            
    } 
    if(d==k/2) printf("La chuoi doi xung.");
    getch();
    return 0;
}