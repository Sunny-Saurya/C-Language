#include<stdio.h>

typedef int* pointer;
int main()
{
    // int *x,y; // Declare a pointer variable x and integer value y i.e int*x and int y
    // int *a = x,b = y; //  Assign the address of x to a and the address of y to b
    // printf("%p\n",a); 
    // printf("%p\n",b); 

    int f = 5,e = 7;
    pointer c= &f, d = &e; // Assigning the address of x to a and the address of y to b which is an integer pointer but it thourghs an error.

    printf("%p\n",c);
    printf("%p\n",d);


    // but through typedef  we can make it more readable like this:
    //typedef int * pointer ;  
}