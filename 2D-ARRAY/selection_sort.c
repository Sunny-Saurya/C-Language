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
        int min = __INT_MAX__;
        int minidx = -1;
        for(j = i; j<n; j++) // you can also use j<n-1, j<=n-2; j<n-1-i
        {
            if(min>arr[j])
            {
                min = arr[j];
                minidx = j;
            }   
        }
        int temp = arr[minidx];
        arr[minidx] = arr[i];
        arr[i] = temp;
        
    }
    printf("The sorted array is : \n");
    for(i = 0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }
}