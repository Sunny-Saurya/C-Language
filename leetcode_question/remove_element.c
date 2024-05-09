// 26. Remove Duplicates  Array

#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter the size: ");
    scanf("%d",&n);

    int arr[n];
    for(i = 0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i = 0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    for(i = 0; i<n; i++)
    {
        if(arr[i] != arr[i+1]) printf("%d ",arr[i]);
    }



}
