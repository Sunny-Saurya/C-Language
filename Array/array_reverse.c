//REVERSING PART OF ARRAY.

// #include<stdio.h>
// void reverse(int arr[])
// {
//     for(int i =0, j=6; i<j; i++,j--)
//     {
//         int temp = arr[i];
//         arr[i] = arr[j];
//         arr[j] = temp;
//     }
//     return;
// }
// int main()
// {
//     int arr[7] = {1,2,3,4,5,6,7};
//     reverse(arr);
//     for(int i = 0; i<=6; i++)
//     {
//         printf("%d ",arr[i]);
//     }
//     return 0;
// }

// second method ---> without using function //


// #include<stdio.h>
// int main()
// {
//     int arr[7] = {1,2,3,4,5,6,7};
//     // reverse(arr);

//     // REVERSE ONLY VALUE FROM INDEX 1 TO 4 //

//     for(int i =1,j =4; i<=j; i++,j--)
//     {
//         int temp = arr[i];
//         arr[i] = arr[j];
//         arr[j] = temp;
//     }
//     for(int i = 0; i<=6; i++)
//     {
//         printf("%d ",arr[i]);
//     }
//     return 0;
// }


// THIRD METHOD ---> BY USING FUCNTION //

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
    // insite arr function just put the value of that index you want to swap from till last index till where you want ot swap. //

    reverse(arr,1,4);
    for(int i = 0; i<=6; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
