// #include<stdio.h>

// void sum(int n, int s)
// {
//     if(n == 0)
//     {
//         printf("The sum of the given number is = %d",s);
//         return;
//     }
//     sum(n-1,s+n);
//     return;


// }
// int main()
// {
//     int n;
//     printf("Enter any number : " );
//     scanf("%d",&n);

//     sum(n,0);
// }


// ANOTHER METHOD IS: 

#include<stdio.h>

int sum(int n)
{
    if(n == 0 || n==1) return n;
    int sumAns =  n + sum(n-1);
    return sumAns;

}
int main()
{
    int n;
    printf("Enter any number : " );
    scanf("%d",&n);

    int sumAns = sum(n);
    printf("%d",sumAns);
    return 0;
}

