// // odd and even array //

// #include<stdio.h>
// int main()
// {
//     int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//     int even[10];
//     int odd[10];
//     int ecount = 0; 
//     int ocount = 0;
//     int i;
//     for(i = 0; i<10; i++)
//     {
//         if(arr[i]% 2 == 0)
//         {
//             even[ecount] = arr[i];
//             ecount++;
//         }
//         else{
//             odd[ocount] = arr[i];
//             ocount++;
//         }
//     }
//     for(i= 0; i<ecount; i++)
//     {
//         printf("%d ",even[i]);
//     }
//     printf("\n");
//     for(i= 0; i<ocount; i++)
//     {
//         printf("%d ",odd[i]);
//     }

// }


// BY TAKING THE INPUT FROM THE USER.

#include<stdio.h>
int main()
{
    int r;
    printf("Enter the row: ");
    scanf("%d",&r);

    int arr[r];
    int even[r];
    int odd[r];
    int ecount = 0, ocount = 0;
    int i;

    for(i = 0; i<r; i++)
    {
        scanf("%d",&arr[i]);
    }
    // for(int i = 0; i<r; i++)
    // {
    //     printf("%d",arr[r]);
    // }
    // printf("\n");
    for(i = 0; i<r; i++)
    {
        if(arr[i] % 2 == 0)
        {
            even[ecount] = arr[i];
            ecount++;
        }
        else{
            odd[ocount] = arr[i];
            ocount++;
        }
    }
    for(i= 0; i<ecount; i++)
    {
        printf("%d ",even[i]);
    }
    printf("\n");
    for(i = 0; i<ocount; i++)
    {
        printf("%d ",odd[i]);
    }
}