#include<stdio.h>
int main()
{
    int r,c;
    printf("Enter the number of rows and columns: ");
    scanf("%d%d",&r,&c);

    int arr[r][c];
    int sum = 0;

    for(int i = 0; i<r; i++)
    {
        for(int j = 0; j<c; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i = 0; i<r; i++)
    {
        for(int j = 0; j<c; j++)
        {
            sum = sum + arr[i][j];
        }
    }
    printf("\n sum is = %d ",sum);
}