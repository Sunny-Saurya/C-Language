// #include<stdio.h>
// int main()
// {
//     int arr[2][3] = {{1,2,3},{4,5,6}};

//     // printf("%d ",arr[2][3]);

//     for(int i = 0; i<3; i++)
//     {
//         for(int j = 0; j<2;j++)
//         {
//             printf("%d ",arr[j][i]);
//         }
//         printf("\n");
//     }

// }

#include<stdio.h>
int main()
{
    int r;
    printf("Enter the number of rows: ");
    scanf("%d",&r);

    int arr[r][r];

    for(int i = 0; i<r; i++)
    {
        for(int j = 0; j<r; j++)
        {
            scanf("%d ",&arr[i][j]);
        }
    }

    for(int i = 0; i<r; i++)
    {
        for(int j = i; j<r; j++)
        {
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }
    for(int i = 0; i<r; i++)
    {
        for(int j = 0; j<r; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }


}