#include<stdio.h>
int main()
{
    int n,i;
    int *pn = &n;

    printf("Enter the value of n: ");
    scanf("%d",pn);
    if(*pn % 2 == 0)
    {
        printf("%d is even number ",n);
    }
    else printf("%d is an odd number",n);

}