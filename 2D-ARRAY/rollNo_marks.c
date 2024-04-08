// #include<stdio.h>
// int main()
// {
//     int r,m;
//     printf("Enter number of student: ");
//     scanf("%d",&r);
//     printf("Enter no. of subject: ");
//     scanf("%d",&m);

//     int roll_marks[r][m];

//     for(int i =0; i<r; i++)
//     {
//         for(int j = 0; j<m; j++)
//         {
//             scanf("%d ",&roll_marks[i][j]);
//         }
//     }
//     printf("The matrices are: ------------------------------\n");
//     for(int i =0; i<r; i++)
//     {
//         for(int j = 0; j<m; j++)
//         {
//             printf("%d ",roll_marks[i][j]);
//         }
//         printf("\n");
//     }
// }


// You are using GCC
// INSERTION OF A VALUES IN ARRAY

#include<stdio.h>
int main()
{
    float arr[7];
    int i,pos;
    
    for(i = 0; i<6; i++)
    {
        scanf("%f ",&arr[i]);
    }
    float value;
    
    scanf("%d%f",&pos,&value);
    for(i = 5; i>=pos; i--)
    {
        arr[i+1] = arr[i];
    }
    arr[pos] = value;
    for(i = 0; i<7; i++)
    {
        printf("%.2f ",arr[i]);
    }
}


// #include<stdio.h>
// int main()
// {
//     char arr[6];
//     int i,pos;
//     for(int i = 0; i<5; i++)
//     {
//         scanf("%c",&arr[i]);
//     }
    
//     char value;
//     scanf("%d%c",&pos,&value);
    
//     for(int i = 4; i>=pos; i--)
//     {
//         arr[i+1] = arr[i];
//     }
//     arr[pos] = value;
//     for(int i = 0; i<6; i++)
//     {
//         printf("%c",arr[i]);
//     }
// }


// #include<stdio.h>
// int main()
// {
//     int size;
//     scanf("%d",&size);
//     int arr[size];
//     int i,pos;
//     scanf("%d",&pos);
//     for(int i = 0; i<size;i++)
//     {
//         scanf("%d",&arr[i]);
//     }
    
//     int value;
//     scanf("%d ",&value);
    
//     for(int i = size-1; i>=pos; i--)
//     {
//         arr[i+1] = arr[i];
//     }
//     arr[pos] = value;
    
//     for(int i = 0; i<=size; i++)
//     {
//         printf("%d ",arr[i]);
//     }
// }


// DELETION OF A VALUE IN AN ARRAY

// #include<stdio.h>
// int main()
// {
//     char name[7];
//     int i,pos;
//     for(i = 0; i<7; i++)
//     {
//         scanf("%c ",&name[i]);
//     }
//     scanf("%d",&pos);
//     for(i = pos; i<=5; i++)
//     {
//         name[i] = name[i+1];
//     }
    
//     for(i = 0; i<6; i++)
//     {
//         printf("%c ",name[i]);
//     }
// }


// BUBBLE SORTING 

// #include<stdio.h>
// int main()
// {
//     int arr[7] = {23,12,56,87,45,32,2};
//     for(int i = 0; i<7; i++)
//     {
//         for(int j = 0; j<6-i-1; i++)
//         {
//             if(arr[j]>arr[j+1])
//             {
//                 int temp = arr[j];
//                 arr[j] = arr[j+1];
//                 arr[j+1]= temp;
//             }
//         }
//     }
//     for(int i = 0; i<7; i++)
//     {
//             printf("%d ",arr[i]);
//     }
    
    
// }


// #include<stdio.h>
// int main()
// {
//     int a[30];
//     int size,i,j;
//     scanf("%d",&size);
//     a[size];
    
//     for(i = 0; i<size; i++)
//     {
//         scanf("%d ",&a[i]);
//     }
    
//     for(i = 0; i<size; i++)
//     {
//         for(j = 0; j<=size-i-1; j++)
//         {
//             if(a[j] >a[j+1])
//             {
//                 int temp;
//                 temp = a[j];
//                 a[j] = a[j+1];
//                 a[j+1] =temp;
//             }
//         }
//     }
//     for(i = 0; i<size; i++)
//     {
//         printf("%d ",a[i]);
//     }
    
// }



