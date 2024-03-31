#include<stdio.h>
int main()
{
    int size;
    printf("Enter the size of an array: ");
    scanf("%d",&size);

    int arr[size];
    int array;
    int i,j;
    for(i=1; i<=size; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i = 1; i<=size; i++)
    {
        array = arr[i];
        printf("%d ",array);
    }
    for(j = size; j>=0; j--)
    {
        
    }
    if(i == j)
        {
            printf("Yes, array is palindrome");
        }
        else{
        printf("No, array is not palindrome");
    
    }
    }