/*5. Write a program in C to count the total number of duplicate elements in an array.
Test Data :
Input the number of elements to be stored in the array :3
Input 3 elements in the array :
element - 0 : 5
element - 1 : 1
element - 2 : 1
Expected Output :
Total number of duplicate elements found in the array is : 1 */

#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of an array: ");
    scanf("%d",&n);

    int i,j;

    int arr[n];

    for(i = 0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("The array is: \n");

    for(i = 0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }

    int count = 0;
    for(i = 0; i<n; i++)
    {
        for(j = i+1; j<n; j++)
        {
            if(arr[i] == arr[j])
            {
                count++;
                break;
            }
            else continue;
        }
    }
    printf("There are %d duplicates value int this array",count);


}