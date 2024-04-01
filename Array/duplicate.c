#include<stdio.h>
int main()
{
    int arr[7] = {1,2,3,5,3,2,1};
    for(int i = 0; i<=6; i++)
    {
        for(int j = i+1; j<=6; j++)
        {
            if(arr[i] != arr[j]) {
                printf("%d is the unique element",arr[i]);
                break;
            }
        
        }
    }
}