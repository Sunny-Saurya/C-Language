// SINGLE POINTER.

/*#include<stdio.h>
int main()
{
    int a;
    int *ptr;

    a = 7;
    ptr = &a;

    printf("The address of a is %p\n",ptr);
    printf("The value of a is %d\n",*ptr);
    printf("The value of a is %p\n",*ptr);

}*/

#include<stdio.h>
int main()
{
    int a;
    int *ptr;

    a = 7;
    ptr = &a;

    int **ptr2 = *ptr; // throw an error

    printf("The address of a is %p\n",ptr);
    printf("The value of a is %d\n",*ptr);
    printf("The value of a is %p\n",*ptr);

    printf("The address of *ptr is %p\n",**ptr2);
}