// inserting number at any perticular index.
#include<stdio.h>
int main()
{
    int arr[10] = {2,4,6,8};
    // int n=sizeof(arr)/sizeof(arr[0]);
    printf("Original array is : \n");
    for (int i = 0; i < 4; ++i)
    {
        printf("%d ",arr[i]);
    }
    int num,index;
    printf("Enter the position where you want to insert this element: ");
    scanf("%d",&index);
    printf("\nEnter the element to be inserted: ");
    scanf("%d",&num);

    for(int i = 4; i>=index; i--)
    {
        arr[i+1] = arr[i];
    }
    arr[index] = num;
    
    printf("\nArray after Insertion:\n");
    for (int j = 0; j <= 9; ++j)    
    {
        printf("%d ",arr[j]);
    }


}