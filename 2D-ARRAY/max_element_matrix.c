#include<stdio.h>
int main()
{
    int r,c;
    printf("Enter the number of rows and columns: ");
    scanf("%d%d",&r,&c);

    int arr[r][c];
    int i,j;

    for(i = 0; i<r; i++)
    {
        for(j = 0; j<c; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\n");

    // for(int i = 0; i<r; i++)
    // {
    //     for(int j = 0; j<c; j++)
    //     {
    //         printf("%d ",arr[i][j]);
    //     }
    //  printf("\n");
    // }
    int max = arr[0][0];
    for(i = 0; i<r; i++)
    {
        for(j = 0; j<c; j++)
        {
            if(arr[i][j]>max)
            {
                max = arr[i][j];
            }
        }
    }
    printf("\n max is = %d at an index of = %d",max,j);
}