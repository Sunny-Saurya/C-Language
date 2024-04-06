#include<stdio.h>
int main()
{
    int r,c;
    printf("Enter the number of rows and column: ");
    scanf("%d%d",&r,&c);

    int arr[r][c];
    int a[r][c];
    int res[r][c];

    for(int i= 0; i<r; i++)
    {
        for(int j = 0; j<c; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i= 0; i<r; i++)
    {
        for(int j = 0; j<c; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(int i= 0; i<r; i++)
    {
        for(int j = 0; j<c; j++)
        {
            res[i][j] = arr[i][j]+a[i][j];
        }
    }
    for(int i= 0; i<r; i++)
    {
        for(int j = 0; j<c; j++)
        {
            printf("%d ",res[i][j]);
        }
        printf("\n");
    }


}