// #include<stdio.h>
// int main()
// {
//     int n;
//     printf("Enter the number of rows: \n");
//     scanf("%d", &n);
    
//     for(int i = 1; i<=n; i++){
//         for( int j = 1; j<=i; j++){
//             printf("*");
//         }
//         printf("\n");
//     }
// }

#include <stdio.h>
int main()
{
    int i,j,start,end;
    printf("Enter the starting number: \n");
    printf("Enter the last number : \n");
    scanf("%d%d",&start,&end);
    for(i =start; i<=end; i++)
    {
        for(j =1; j<=10; j++)
        {
            printf("%d ",i*j);
        }
        printf("\n");
    }
}