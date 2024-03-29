// write a program to count the digit of the given number:

// #include<stdio.h>
// int main()
// {
//     int n,count = 0,ld;
//     printf("Enter any number: ");
//     scanf("%d",&n);

//     while (n>0)
//     {
//         n = n/10;
//         count++;
//     }
    
//     printf("%d",count);
// }

// write a program to print the sum of the digit of the given number:

#include<stdio.h>
int  main()
{
    int num;
    printf("Enter any number to find the sum of the digit: ");
    scanf("%d",&num);

    int sum = 0;
    int rev;
    while(num>0)
    {
        rev = num % 10;
        sum = sum + rev;
        num = num /10;

    }
    printf("%d",sum);
}