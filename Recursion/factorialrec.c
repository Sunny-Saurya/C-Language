#include<stdio.h>

int factorial(int n){
    if(n == 0 || n == 1)  return 1;
    int recAns = n* factorial(n-1);
    return recAns;
}
int  main(){
    int n;
    printf("Enter the number you want ot know the factorial of: ");
    scanf("%d",&n);
    int fact = factorial(n);
    printf("The factorial of %d  = %d",n,fact);
}