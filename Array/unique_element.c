#include<stdio.h>
#include<stdbool.h>
int main()
{
    int i,j;
    int arr[7] = {1,3,2,4,4,2,1};
    for(i = 0; i<=6; i++)
    {
        bool flag = false;

        for(j = i+1; j<=6; j++)
        {
            if(arr[i] == arr[j]) {
                flag = true;
            }
        
        }
        if(flag == false){
            printf("%d the unique element",arr[i]);
        break;
        }
        
    }
}

