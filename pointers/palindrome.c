#include<stdio.h>
int main()
{
    int n,rev;
    int *pn = &n;
    printf("Enter the number to check palindrome: ");
    scanf("%d",pn);

    int temp = n;
    int sum = 0;

    while (n>0)
    {
        rev = n % 10;
        sum = sum*10 + rev;
        n/=10;
    }
    if(sum == temp)
    {
        printf("%d is a palindrome number ",temp);
    }
    else printf("%d is  not a palindrome number",temp);
    
}