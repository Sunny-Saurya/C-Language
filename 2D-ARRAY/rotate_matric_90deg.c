#include<stdio.h>
int main()
{
    int n;
    printf("Enter size of square matrix: ");
    scanf("%d",&n);

    int arr[n][n];
    int i,j,k;
    for(i = 0; i<n; i++)
    {
        for(j = 0; j<n; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    // STEP -1 --> transpose of a matrix

    printf("The transpose of matrix is: \n");

    for(i = 0; i<n; i++)
    {
        for(j = 0; j<=i; j++)
        {
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }

    for(i = 0; i<n; i++)
    {
        for(j = 0; j<n; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    // STEP - 2 ---> rotation of matrix by 90 degree in clockwise direction 

    for(i = 0; i<n; i++)
    {
        int j = 0;
        int k = n-1;
        while (j<k)
        {
            int temp = arr[i][j];
            arr[i][j] = arr[i][k];
            arr[i][k] = temp;
            j++;
            k--;
        }
    }

    printf("The matrix after rotation is: \n");

    
    for(i = 0; i<n; i++)
    {
        for(j = 0; j<n; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }


}