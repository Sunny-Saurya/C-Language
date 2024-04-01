#include<stdio.h>
void reverse(int arr[], int si, int ei)  // si - starting index  ei - ending index //
{
    for(int i =si, j=ei; i<j; i++,j--)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    return;
}
int main()
{
    int arr[7] = {1,2,3,4,5,6,7};

    int n = 7;
    // insite arr function just put the value of that index you want to swap from till last index till where you want ot swap. //

    int k = 6;

    // STEPS //
    
    reverse(arr,0,n-1);
    reverse(arr,0,k-1);
    reverse(arr,k,n-1);

    for(int i = 0; i<=6; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}