#include<stdio.h>
int main()
{
    int size;
    scanf("%d",&size);
    int i,j;
    int arr[size];
    int brr[size];
    
    for(i = 0; i<size; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i = 0; i<size; i++)
    {
        scanf("%d",&brr[i]);
    }
    int count  = 0;
    for(i = 0; i<size; i++)
    {
        if(arr[i] == brr[i])
        {
            count++;
        }
        
    }
    if(count == size) printf("Yes");
    else printf("No");
    
    
}