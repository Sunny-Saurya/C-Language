// #include<stdio.h>
// int main()
// {
//     int n,i;
//     printf("Enter the size: ");
//     scanf("%d",&n);

//     int arr[n];
//     for(i = 0; i<n-1; i++)
//     {
//         scanf("%d ",&arr[i]);
//     }
//     int idx;
//     scanf("%d",&idx);

//     int value;
//     scanf("%d",&value);
    

//     for(i = n-2; i>=idx; i--)
//     {
//         arr[i+1] = arr[i];
//     }
//     arr[idx] = value;

//     for(i = 0; i<n; i++)
//     {
//         printf("%d ",arr[i]);
//     }
// }

#include<stdio.h>
int fact(int n)
{
    if(n == 0 || n == 1) printf("1");
    else n* fact(n-1);   
}

int main()
{
    int n;
    printf("enter number: ");
    scanf("%d",&n);
    fact(n);
}