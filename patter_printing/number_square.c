#include<stdio.h>
int main()
{
    int n,m;
    printf("Enter the number of rows: ");
    scanf("%d",&n);

    printf("Enter the number of column: ");
    scanf("%d",&m);

    for(int i =1; i<=n; i++)
    {
        for(int j = 1; j<=n; j++) // but technically its not allowed. although it could work in this case 
        {
            printf("%d ",j);
        }
        printf("\n");
    }
}