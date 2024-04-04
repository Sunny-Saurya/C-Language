#include<stdio.h>
int main()
{
    int x; 
    int size;
    printf("Enter the size of the array: ");
    scanf("%d",&size);
    
    int arr[size];

    for(int i = 1; i<=size; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("The array you entered is: \n");

    for(int i = 1; i<=size; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\nEnter the number you want to search for: ");
    scanf("%d",&x);

    for(int i = 1; i<size; i++)
    {
        if(arr[i] == x)
        {
            printf("%d is present is the array at index %d",x,i);
            // break;
        }
    }
}