// 26. Remove Duplicates from Sorted Array


#include<stdio.h>
int main()
{
    int n,i,j;
    printf("Enter Size: ");
    scanf("%d",&n);

    int arr[n];
    
    for(i = 0; i<n; i++)
    {
        printf("\n%d Element : ",i+1);
        scanf("%d", &arr[i]);
    }
    //Printing the array elements
    printf("\nElements in Array are:\n");

    for(i = 0; i<n; i++)
    {
        for(j = 0; j<n; j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    printf("\n");
    for(i = 0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("The final array after removing duplicates: \n");

    for(i = 0; i<n; i++)
    {
        if(arr[i] != arr[i+1]) printf("%d ",arr[i]);
    }
}