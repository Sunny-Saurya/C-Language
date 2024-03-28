// calculte the sum of all element which is present in the array.
// #include<stdio.h>
// int main()
// {
//     int arr[10],sum = 0;
//     for(int i = 0; i<10; i++)
//     {
//         printf("enter the number: %d",i-0);
//         scanf("%d",&arr[i]);
//     }
//     for(int i = 0; i<arr[i]; i++)
//     {
//         sum = sum + arr[i];
//     }
//     printf("%d", sum);
// }

// same code in the product;

// #include<stdio.h>
// int main()
// {
//     int arr[4],pro = 1;
//     for(int i = 0; i<4; i++)
//     {
//         printf("enter the number: %d ",i-0);
//         scanf("%d",&arr[i]);
//     }
//     for(int i = 0; i<arr[i]; i++)
//     {
//         pro = pro * arr[i];
//     }
//     printf("%d", pro);
// }

// find the maximum number within the array.

// #include<stdio.h>
// int main()
// {
//     int arr[3];
//     for(int i = 0; i<3; i++)
//     {
//         printf("Enter the number %d: ",i+1);
//         scanf("%d",&arr[i]);
//     }
//     for(int i = 0; i<3; i++)
//     {
//         if(arr[0]>arr[1] && arr[0]>arr[2] ){
//             printf("greates is %d ",arr[0]);
//             break;
//         }
//         else if(arr[1]>arr[2] && arr[1]>arr[0])
//         {
//             printf("greartest is %d ",arr[1]);
//             break;
//         }
//         else{
//             printf("greatest is %d ",arr[2]);
//             break;
//         }
//     }
// }

//we can also check the maximum number by using hypothetical case or by letting somthing 

// #include<stdio.h>
// int main()
// {
//     int arr[5] = {12,203,34,45,45};
//     int max = arr[0];
//     for(int i = 0; i<5; i++)
//     {
//         if(max<arr[i])
//         {
//             max = arr[i];
//         }
//     }
//     printf("Greatest number is %d",max);
// }

// MINIMUM

// #include<stdio.h>
// int main()
// {
//     int arr[5] = {2,203,34,45,1};
//     int max = arr[0];
//     for(int i = 0; i<5; i++)
//     {
//         if(max>arr[i])
//         {
//             max = arr[i];
//         }
//     }
//     printf("least number is %d",max);
// }

// one more method is by using built libraty. INT_MAX, INT_MIN

// #include<stdio.h>
// #include<limits.h>
// int main()
// {
//     int arr[5] = {12,203,34,45,405};
//     int max = INT_MIN;  // OR FOR MINIMUM WE USE: INT_MIN
//     for(int i = 0; i<5; i++)
//     {
//         if(max<arr[i])
//         {
//             max = arr[i];
//         }
//     }
//     printf("Greatest number is %d",max);
// }

// IN GIVEN ARRAY, CHANGE THE VALUE OF ALL ODD INDEXED ELEMENT AND MULTIPLY IT BY 2 BUT IF THE INDEX IS EVEN THEN INCREMENT THE VALUE BY 10;

// #include<stdio.h>
// int main()
// {
//     int arr[10];
//     int i;
    
//     for(i = 0; i<10; i++)
//     {
//         printf("Enter the number %d  ",i-0);
//         scanf("%d",&arr[i]);
//     }
//     for(int i = 0; i<10; i++)
//     {
//         if(i%2  == 0) arr[i] = arr[i]+10;
//         else arr[i] = arr[i]*2;
//     }
//     for(int i = 0; i<10; i++) printf("%d ",arr[i]);
    
// }

// COUNT THE NUMBER IN THE ARRAY WHICH IS GREATER THAN THE GIVEN NUMBER X.

// #include<stdio.h>
// int main()
// {
//     int arr[7] = {12,23,34,45,56,67,78};
//     int max = 27;
//     int count = 0;

//     for(int i = 0; i<7; i++)
//     {
//         if(arr[i]>max)
//         {
//             count++;
//         }
//     }
//     printf("There are %d element which is greater than %d",count,max);
// }

// find the difference between the sum of element of even indices and sum of element of odd indices.

// #include<stdio.h>
// int main()
// {
//     int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//     int sum = 0, sum1 = 0;
//     for(int i = 0; i<10; i++)
//     {
//         if(i%2 == 0) sum = sum + arr[i];
//         else sum1 = sum1 + arr[i];
//     }
//     printf("The differec is %d ",sum-sum1);
// }

// FIND THE TOTAL NUMBER OF PAIR WHICH IS GREATER THAN THE GIVEN NUMBER X;

// #include<stdio.h>
// int main()
// {
//     int arr[10] = {4,5,3,7,9,2,8};
//     int x = 10;
//     int count  = 0;
//     for(int i = 0; i<10; i++)
//     {
//         for(int j = i+1; j<10; j++)
//         {
//             if(arr[i]+arr[j]>=x)
//             {
//                 count++;
//                 printf("(%d,%d)",arr[i],arr[j]);
//             }
//         }
//     }
//     printf("%d",count);
// }


//COUNT THE NUMBER OF TRIPLETS WHICH IS GREATER THAN OR EQUAL TO THE GIVEN NUMBER X;

// #include<stdio.h>
// int main()
// {
//     int arr[10] = {2,4,5,7,9,4,2,4,7,8};
//     int x = 12;
//     int count = 0;

//     for(int i = 0; i<10; i++)
//     {
//         for(int j = i+1; j<10; j++)
//         {
//             for(int k = j+1; k<10; k++)
//             {
//                 if(arr[i]+arr[j]+arr[k] >= x) {
//                     count++;
//                     printf("(%d,%d,%d)",arr[i],arr[j],arr[k]);
//                 }
//             }
//         }
//     }
//     printf("%d\n ",count);
// }

// FIND THE SECOND LARGEST ELEMENT IN THE ARRAY.

// #include<stdio.h>
// #include<limits.h>
// int main()
// {
//     int arr[7] = {23,34,45,89,76,34,89};
//     int max = INT_MIN;
//     int sec_max = INT_MIN;

//     for(int i = 0; i<7; i++)
//     {
//         if(arr[i]>max)
//         {
//             max = arr[i];

//         }
//     }
//     // value = 89;

//     for(int i = 0; i<7; i++)
//     {
//         if(arr[i] != max && sec_max < arr[i])
//         {
//             sec_max = arr[i];
//         }
//     }
//     printf("%d",sec_max);
// }


//WAP TO REVERSE THE ARRAY

#include<stdio.h>
int main()
{
    int arr[13] = {7,6,5,4,3,2,1,2,3,4,5,6,7};

    for(int i =12; i>=0; i--)
    {
        printf("%d ",arr[i]);
    }
   
}