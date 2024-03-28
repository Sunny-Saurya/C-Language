// #include<stdio.h>
// int main()
// {
//     // deceration of array 
//     // 1st way.

//     // int arr[5] = {1,2,3,4,5};
//     // printf("%d",arr[4]); // 5

//     //2nd way is;

//     // int arr[5];
//     // arr[0] = 523;
//     // arr[1] = 323;
//     // arr[2] = 123;
//     // arr[3] = 923;
//     // arr[4] = 223;
//     // printf("%d",arr[0]); //523


//     // 3rd way to take input from the user.

//     // int a[5];
//     // for(int i = 0; i<=5; i++)
//     // {
//     //     int b = i+1;
//     //     printf("Enter element number %d\n",i);
//     //     scanf("%d ",&a[i]);
//     // }
//     // for(int i = 5; i>=0; i--)
//     // {
//     //     printf("%d ",a[i]);
//     // }



    
// }

// QUESTION NO. 1

// #include<stdio.h>
// int main()
// {
//     int marks[10];
//     int i;
//     for(i = 0; i<10; i++)
//     {
//         printf("Enter the  marks student %d  ",i+1);
//         scanf("%d ",&marks[i]);
//     }
//     for(i = 0; i<10; i++){
//         if(marks[i]<35)
//     {
//         printf(" Roll number %d is failed\n",i);
//     }
//     }
    
// }

#include<stdio.h>
int main()
{
    int arr[5] = {1,2,3,4,5};
    // printf("%d\n",arr[0]);
    printf("%d\n",&arr[0]);
    printf("%d\n",&arr[1]);
    printf("%d\n",&arr[2]);
    printf("%d\n",&arr[3]);
    printf("%d\n",&arr[4]);
}