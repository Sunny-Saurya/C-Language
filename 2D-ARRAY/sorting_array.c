// // You are using GCC
// #include<stdio.h>
// int main()
// {
//     char a[30];
//     int size,i,j;
//     scanf("%d",&size);
    
//     char temp;
    
//     for(i = 0; i<size; i++)
//     {
//         scanf("%c",&a[i]);
//     }
//     for(i = 0; i<size; i++)
//     {
//         for(j  =0; j<size-i-1; j++)
//         {
//             if(a[j]>a[j+1])
//             {
//                 temp = a[j];
//                 a[j] = a[j+1];
//                 a[j+1]= temp;
//             }
//         }
//     }
//     for(i = 0; i<size; i++)
//     {
//         printf("%c ",a[i]);
        
//     }
    
// }


#include<stdio.h>
int main()
{
    int arr[100];
    int n;
    scanf("%d",&n);
    for(int i = 0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<n-i-1; j++)
        {
            if(arr[j]<arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    
    for(int i = 0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }
    
}