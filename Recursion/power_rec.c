// // #include<stdio.h>
// // #include<math.h>  // this is by using math built in function.
// // int power(int a,int b)
// // {
// //     if(a == 0 || a == 1) return 1;
// //     else return pow(a,b);
// // }
// // int main()
// // {
// //     int a,b;
// //     printf("Enter the number and their base: ");
// //     scanf("%d%d",&a,&b);

// //     int yoyo = power(a,b);
// //     printf("%d",yoyo);
// // }


// //*******************Method-2*********************

// #include<stdio.h>

// int power(int a,int b)
// {
//     if(b == 0) return 1;
//     return a*power(a,b-1);
// }
// int main()
// {
//     int a,b;
//     printf("Enter the number and their base: ");
//     scanf("%d%d",&a,&b);

//     int yoyo = power(a,b);
//     printf("%d",yoyo);
// }

#include<stdio.h>

int power(int a, int b)
{
    if(b == 0) return 1;
    int x = power(a,b/2);
    if(b%2 == 0)
    {
        return x*x;
    }
    else{
        return x*x*a;
    }
}
int main(){
    int a,b;
    printf("Enter exponent: ");
    scanf("%d",&a);
    printf("Enter base: ");
    scanf("%d",&b);
    int p =  power(a,b);
    printf("%d  raised to the power %d is %d",a,b,p);
    return 0; 
}