#include<stdio.h>
int main()
{
    int n;
    printf("Enter size: ");
    scanf("%d",&n);

    int arr[n];

    for(int i = 0; i<n; i++)
    {
        scanf("%d",&arr[i]);
        // printf("%d ",arr[i]);
    }
    // printf("\n");

    int max = 0;
    int max2 = 0;
    for(int j =0; j<n; j++)
    {
        if((arr[j]>max && max2 != max) || (arr[j]>max && max==0)){
            max2=max;
            max = arr[j];

        }
    }
    printf("%d",max2);
}