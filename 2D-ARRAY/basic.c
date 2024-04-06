// #include<stdio.h>
// int main()
// {
//     int arr[3][3] = {{1,2,3},{3,4,5},{6,7,8}};
//     for(int i = 0; i<3; i++)
//     {
//         for(int j = 0; j<3; j++)
//         {
//             printf("%d ",arr[i][j]);
//         }
//         printf("\n");
//     }
// }


#include<stdio.h>
int fact(int n)
{
    if(n == 0 || n == 1) return 1;
    else return  n* fact(n-1);   
}

int main()
{
    int n;
    printf("enter number: ");
    scanf("%d",&n);
    int f = fact(n);
    printf("%d",f);
}