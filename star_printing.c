#include<stdio.h>
int main()
{
    int n,m;
    printf("enter the number of rows and columns: ");
    scanf("%d%d",&n,&m);

    for(int i = 1; i<=n; i++)
    {
        for(int j = 1; j<=m; j++)
        {
            if(i == j || i+j == n+1)
            printf("*");
            else printf(" ");
        }
        printf("\n");
    }
}