#include<stdio.h>
#include<stdbool.h>
int main()
{
    int i;
    int arr[7] = {12,21,21,42,21,6,7};
    int x = 42;
    int idx = -1;
    bool flag = false;
    for(i = 0; i<=6; i++)
    {
        if(arr[i] ==x)
        {
            flag = true;
            idx = i;
            break;
        }
    }
    if(flag == false) printf("%d is not present in the array.");
    else{
        printf("%d is present in the array at an index of %d",x,i);
    }
}