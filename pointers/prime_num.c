#include<stdio.h>
int main()
{
    int n;
    int *pn = &n;
    printf("Enter the number : ");
    scanf("%d",pn);

    int count = 0;
    int *pcount = &count;

    int i;
    for(i = 1; i<n+1; i++)
    {
        if(*pn % i == 0)
        {
            count++;
        }
    }
    if(count == 2)
    {
        printf("%d is the prime number",n);
    }
    else printf("%d is the composite number",n);
}


// WITHOUT USING POINTERS;
/*#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d ",&n);

    int count = 0;
    int i;
    for(i = 1; i<n+1; i++)
    {
        if(n % i == 0)
        {
            count++;
        }
    }
    if(count == 2)
    {
        printf("%d is the prime number",n);
    }
    else printf("%d is the composite number",n);
}*/