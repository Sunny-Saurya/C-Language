/* Write a program in C to copy the elements of one array into another array.
Test Data :
Input the number of elements to be stored in the array :3
Input 3 elements in the array :
element - 0 : 15
element - 1 : 10
element - 2 : 12
Expected Output :
The elements stored in the first array are :
15 10 12
The elements copied into the second array are :
15 10 12 */

#include<stdio.h>
int main()
{
    int n;
    printf("Enter size of an array: ");
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Values of array before copying: \n");

    for(int i = 0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }
    int brr[n];
    for(int i = 0; i<n; i++)
    {
        int temp = arr[i];
        arr[i] = brr[i];
        brr[i] = temp;
    }

    printf("Values of array after copying: \n");
    for(int i = 0; i<n; i++)
    {
        printf("%d ",brr[i]);
    }

}