#include <stdio.h>
#include <conio.h>

int main()
{
    int n,i,d;
    printf("Input: \n");
    printf("n: ");
    scanf("%d",&n);
    printf("\nd: ");
    scanf("%d",&d);
    printf("\n>>Output: \n");
    for (i=1;i<=n;i++)
    {
        if (i%d==0)
        printf("%d ",i);
    }
    getch();
    return 0; 

}