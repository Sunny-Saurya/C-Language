#include<stdio.h>
void fun(int a[]){
    int temp = a[0];
    a[0] = a[1];
    a[1] = temp;
}
int main()
{
    int arr[2] = {2,4};
    printf("Before swapping : %d %d\n", arr[0], arr[1]);
    fun(arr);
    printf("After swapping: %d %d\n",arr[0],arr[1]);
}

// SO THE POINT IS: IN ARRAY WE DONT NEED OF POINTER WE JUST ONLY CHANGE OR CALL THE FUNCTION BY  USING PASS BY VALUE