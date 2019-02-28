#include <stdio.h>
#include <conio.h>

int main()
{
    int n,i;
    printf("Enter number n: ");
    scanf("%d",&n);
    printf("\n>>Output: ");
    for (i=1;i<=n;i++)
    printf("\nThis is the sentences: %d",i);
    getch();
    return 0;
}