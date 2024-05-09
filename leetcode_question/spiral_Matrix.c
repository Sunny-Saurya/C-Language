// 54. Spiral Matrix

#include <stdio.h>
int main()
{
    int n,i,j;
    printf("Enter the number of rows and columns : ");
    scanf("%d", &n);

    int mat[n][n];
    printf("The entered matrix is:\n");
    
    for(i = 0; i<n; i++)
    {
        for(j = 0; j<n; j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
    printf("The matrix is: \n");

    for(i = 0; i<n; i++)
    {
        for(j = 0; j<n; j++)
        {
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
    /* Printing the spiral form of the given matrix */

    printf("The Spiral Matrix is: \n");

    for(i = 0; i<1; i++)
    {
        for(j = 0; j<n; j++)
        {
            printf("%d ",mat[i][j]);
        }
        i++;
        for(j = 1; j<=2; j++)
        {
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
}