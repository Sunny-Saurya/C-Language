/*2. Write a program in C to read n number of values in an array and display them in reverse order.
Test Data :
Input the number of elements to store in the array :3
Input 3 number of elements in the array :
element - 0 : 2
element - 1 : 5
element - 2 : 7
Expected Output :
The values store into the array are :
2 5 7
The values store into the array in reverse are :
7 5 2 
*/

#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of array: ");
    scanf("%d",&n);

    int arr[n];
    for(int i = 0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }

    for(int i = n-1; i>=0; i--)
    {
        printf("%d ",arr[i]);
    }
}