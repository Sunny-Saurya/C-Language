#include<stdio.h>

void ntoOne(int n)
{
    if(n== 0) return;
    printf("%d \n",n);
    ntoOne(n-1);
    return;
}
int main()
{
    int n;
    printf("Enter any number: ");
    scanf("%d",&n);
    ntoOne(n);

}