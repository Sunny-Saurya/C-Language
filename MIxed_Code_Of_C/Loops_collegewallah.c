// display this gp= 3, 12, 48... upto n terms

// #include<stdio.h>
// int main()
// {
//     int n;
//     printf("Enter the number of terms: ");
//     scanf("%d",&n);

//     int a = 3;
//     for(int i = 1; i<=n; i++)
//     {
//         printf("%d ",a);
//         a = a*4;
//     }
// }

// display this ap = 100, 97, 94, ... upto all the terms which are positive

// #include<stdio.h>
// int main()
// {
//     // int n;
//     // printf("Enter any number: ");
//     // scanf("%d",&n);

//     // int a = 100;
//     // for(int i = 1; i<=n; i++)
//     // {
//     //     if(a>0)
//     //     {

//     //     printf("%d ",a);
//     //     a = a-3;
//     //     }
//     //     else{
//     //         break;
//     //     }
//     // }

//     // RATHER THAN THIS WE CAN ALSO DO LIKE THE BELOW ONE.

//     int a= 100;
//     for(int i = 1; a>0; i++)
//     {
//         printf("%d ",a);
//         a = a-3;
//     }
// }


// display this GP 100, 50, 25, 12.5, ......upto n terms

// #include<stdio.h>
// int main()
// {
//     int n; 
//     printf("Enter the number of terms: ");
//     scanf("%d",&n);

//     int a = 100;
//     for(int i = 1; i<=n; i++ )
//     {
//         printf("%d ",a);
//         a = a-(a/2);
//     }
// }

// Write a program to check fi the number is prime number or not.

#include<stdio.h>
int main()
{
    int num;
    printf("Enter any number to check the prime number: ");
    scanf("%d",&num);

    if(num == 1)
    {
        printf("neither a prime  nor a composite number");
    }
    int a = 0;
    for(int i = 2; i<=num-1; i++)
    {
        if(num % i == 0)
        { 
            a = 1;
            break;
        }
    }

    if(a == 0) printf("The given number is prime number");
    else printf("The given mumber is composite number");
}
