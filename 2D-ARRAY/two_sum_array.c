// 167. Two Sum II - Input Array Is Sorted

#include<stdio.h>
int main()
{
    int n;
    printf( "Enter the number of elements in array: ");
    scanf("%d",&n);
    
    int a[n];
    printf("Input the sorted array:\n");
    for (int i = 0; i < n; i++) {
        /* code */
        printf("Element %d: ",i+1);
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++) {
        
        printf("%d ", a[i]);
    }

    int target;
    printf("\nEnter your target number: ");
    scanf("%d",&target);

    for (int i = 0; i < n; i++) {
        
        if(a[i] + a[i+1] == target) printf("%d %d ",i,i+1);
    }
}