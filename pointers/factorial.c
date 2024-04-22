#include<stdio.h>
int main()
{
    int i,fact = 1,n;

    int *pn, *pfact;
    pn = &n;
    pfact = &fact;

    printf("Enter the numebr: ");
    scanf("%d",pn);

    for(i = 1; i<=*pn; i++)
    {
            *pfact = *pfact*i;
    }
    printf("Factorial of %d is %d",n,*pfact);
}