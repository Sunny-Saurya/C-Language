// store the address of the value.

#include<stdio.h>
int main()
{
    // int a = 5;
    // int b = 5;
    // printf("%p %p\n",&a,&b); // %p is used to find out the address of the value.

    // POINTER.

    int c = 10;
    int* c = &c;
    printf("%p\n",c);
    printf("%p\n",&c);
    return 0 ;
}
