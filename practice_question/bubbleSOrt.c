// #include<stdio.h>
// int main()
// {
//     int n;
//     printf("Enter the value of n: ");
//     scanf("%d",&n);

//     int arr[n];
//     int i,j;

//     for(i = 0; i<n; i++)
//     {
//         scanf("%d ",&arr[i]);
//     }
//     int n = sizeof(arr) / sizeof(arr[0]);

//     // for(i = 0; i<n; i++)
//     // {
//     //     printf("%d ",arr[i]);
//     // }

//     for(i = 0; i<n-i-1; i++)
//     {
//         for(j = 0; j<n-1-i; j++)
//         {
//             if(arr[j]>arr[j+1])
//             {
//                 int temp = arr[j];
//                 arr[j] = arr[j+1];
//                 arr[j+1] = temp;
//             }
            
//         }
        
//     }
//     for(i = 0; i<n; i++)
//     {
//         printf("%d ",arr[i]);
//     }
//     printf("\n");
// }

#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int temp=n;
    int rev;
    int sum = 0;
    while(n>0)
    {
        rev = n % 10;
        sum+=rev;
        n = n/10;
    }
    printf("sum = %d\n",sum);
    // int f = 0;

    if(temp % sum == 0)
    {
      printf("%d is the divisible by sum of its digits\n",temp);
    }
    else
    {
        printf("%d is not the divisible by sum of its digits\n",temp);
    }
}


// 12 --> 1+2 = 3
// 12/3 ?

//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// #include <stdio.h>

// int count(int n){
//     int k = 0;
//     while(n>0){
//         k++;
//         n/=10;
//     }
//     return k;
// }

// int main(int argc, char const *argv[])
// {
//     int n,k=0;
//     scanf("%d",&n);
//     int arr[n];
//     for(int i = 0;i<n;i++){
//         scanf("%d",&arr[i]);
//         if (count(arr[i])%2==0){
//             k++;
//         }
        
        
//     }
//     printf("%d",k);
//     return 0;
// }
