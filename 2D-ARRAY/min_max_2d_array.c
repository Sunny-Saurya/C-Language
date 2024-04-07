#include<stdio.h>
int main()
{
    int r,c;
    scanf("%d%d",&r,&c);
    int arr[r][c];
    int i,j;
    for(i = 0; i<r; i++)
    {
        for(j = 0; j<c; j++)
        {
            scanf("%d ",&arr[i][j]);
        }
    }
    for(i = 0; i<r; i++)
    {
        for(j = 0; j<c; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    
    int max = arr[0][0];
    int min = arr[0][1];
    
    for(i = 0; i<r; i++)
    {
        for(j = 0; j<c; j++)
        {
            if(arr[i][j]>max)
            {
                max = arr[i][j];
            }
            else if (arr[i][j]<min)
            {
                min = arr[i][j];
            }
        }
    }
     printf("\n max = %d",max);
     printf("\n min = %d",min);
    
}