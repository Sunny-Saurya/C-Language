#include<stdio.h>
int main()
{
    int n;
    printf("Enter size: ");
    scanf("%d",&n);

    int arr[n];
    int i,j;

    for(i = 0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i = 0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }
    for(i = 0; i<n-1; i++)
    {
        for(j = 0; j<n-1; j++) // you can also use j<n-1, j<=n-2; j<n-1-i
        {
            if(arr[j]<arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            } 
            else continue;
        }
        
    }
    printf("The sorted array is : \n");
    for(i = 0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }
}