// #include<stdio.h>
// int main()
// {
//     int n;
//     printf("enter the size : ");
//     scanf("%d",&n);

//     int arr[n];
//     int i;

//     for(i = 0; i<n; i++)
//     {
//         scanf("%d",&arr[i]);
//     }

//     int key;
//     printf("Enter a number to replace : ");
//     scanf("%d",&key);

//     for(i = 0; i<n; i++)
//     {
//         if(arr[i]<0)
//         {
//             arr[i] = key;
//         }
//     }
//     for(i = 0; i<n; i++)
//     {
//         printf("%d ",arr[i]);
//     }
// }

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    char str[100];
    fgets(str,100,stdin);
    printf("The str: %s",str);
    int len = strlen(str);
    char temp[100];
    for(int i = 0; i<len; i++)
    {
        temp[100] = str[i];
        str[i] = str[len];
        str[len]  = temp[100]; 
    }
    
}