#include<stdio.h>
int main()
{
    int n,m;
    printf("Enter the number of rows and column: ");
    scanf("%d%d",&n,&m);

    for(int i =1; i<=n; i++)
    {
        for(int j = 1; j<=n+1-i; j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
}