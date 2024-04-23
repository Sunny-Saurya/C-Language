// 1. VOID POINTER ---> IT IS A GENERAL PERPOSE POINTER

#include<stdio.h>
int main()
{
    int a = 6;
    float b = 5.5;

    void *p;
    p = &a;
    printf("The interger variable is = %d\n", (*(int *)p)); // derefercing the pointer to the interger value 
    p = &b;
    printf("The interger variable is = %f\n", (*(float *)p)); // derefercing the pointer to the interger value 

}


// 2. NULL POINTER ---> IT  IS A POINTER WHICH STORES NULL VALUES. IT DOES NOT POINT THE VALID MEMORY LOCATION.

// int *p;
// p = NULL; P STORES NULL VALUE
// P = &a; p stores the address of the variable a


// 3. DANGLING POINTER----> A POINTER THAT IS POINTING TO THE MEMORY WHICH IS DE ALLOCATED; POINTED TO THE DELETED MEMORY LOCATION.
/* 
    int n;
    int *p;
    p = (int*)malloc(sizeof(int));
    free(p); 
*/


//4. WILD POINTER ---> when you make the pointer but don't initialize it with a addres. DEREFFERECING IS NOT RECOMMENDED


// CODE FOR ALL THE POINTER.

#include<stdio.h>
int main()
{
    char alpha = 'c';
    void *ptr2;       // VOID POINTER
    ptr2 = &alpha;
    printf("%c ",*(char*)ptr2); // derefrecing the pointer by using type casting.

    int number = 24;
    int *ptr;             //WILD POINTER.

    ptr = NULL;           // NULL POINTER.

    ptr = (int*)calloc(5,4);
    free(ptr);
    ptr = NULL;

    return 0;


}