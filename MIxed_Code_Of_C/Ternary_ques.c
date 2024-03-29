// check maximum of two number by using ternary condition.

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a, b;
    printf("Enter the first num yoiu want oto check: ");
    scanf("%d", &a);
    printf("Enter the second num you want to check: ");
    scanf("%d", &b);

    (a>b)? printf("%d is the greatest number",a): printf("%d is the largest number",b);
    return 0;
}
