// #include<stdio.h> 
// int main() 
// { 
// 	short a=10; //initializing variable of short data type 
// 	int b; //declaring int variable 'b'. 
// 	b=a; //Implicit type casting 
// 	printf("%d\n",a); 
// 	printf("%d\n",b); 
// } 


#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a = 10;
    float b = 10.234;
    printf("%d",(int) b);
    return 0;
}
