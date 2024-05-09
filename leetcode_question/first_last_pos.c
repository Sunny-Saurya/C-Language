//34. Find First and Last Position of Element in Sorted Array

#include<stdio.h>
int main()
{
    int n,i;
    printf( "Enter the number of elements in sorted manner: ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter the array elements:\n");
    for(i=0; i < n ; i++)
    {
        printf("Element %d : ",i+1);
        scanf("%d", &arr[i]);
    }
    for(i=0; i < n ; i++)
    {
        printf("%d ", arr[i]);
    }

    int key;
    printf("\nEnter a element to search its first and last position: ");
    scanf("%d", &key);

    for(i = 0; i<n; i++)
    {
        if(arr[i] == arr[i+1]) printf("%d %d ",i,i+1);

    }
}