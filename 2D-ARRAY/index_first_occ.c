// 28. Find the Index of the First Occurrence in a array

#include<stdio.h>
int main()
{
    int n,i;
    printf( "Enter the size of array : ");
    scanf("%d",&n);

    int arr[n];

    for(i = 0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\n");

    for(i = 0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }

    printf("The index of first occurence is : \n");

    for(i = 0; i<n; i++)
    {
        if(arr[i] == arr[i+1])
        {
            printf("index of first occurence is : %d",i);
            break;
        }
    }

}