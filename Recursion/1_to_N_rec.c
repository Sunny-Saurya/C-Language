// we can solve this problem by two method 1. is by using extra variable x.

// #include<stdio.h>

// void increasing(int x,int n)
// {
//     if(x>n) return;
//     printf("%d\n",x);
//     increasing(x+1,n);
//     return;
// }
// int main()
// {
//     int n;
//     printf("Enter any number: ");
//     scanf("%d",&n);
//     increasing(1,n);
// }

// 2nd method is not using extra variable/

#include<stdio.h>

void ntoOne(int n)
{
    if(n== 0) return;
    ntoOne(n-1);
    printf("%d \n",n);
    return;
}
int main()
{
    int n;
    printf("Enter any number: ");
    scanf("%d",&n);
    ntoOne(n);

}