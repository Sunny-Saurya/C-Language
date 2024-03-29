#include<stdio.h>
void swap (int *a , int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    return;
}
int main()
{
    int a,b;
    printf("Enter a:\n",a);
    scanf("%d",&a);

    printf("Enter b:\n",b);
    scanf("%d",&b);

    swap(&a,&b);
    printf("The value of a : %d",a);
    printf("The value of b : %d",b);
}