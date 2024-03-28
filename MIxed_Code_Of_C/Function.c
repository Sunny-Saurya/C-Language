// sum of two number by using fucntion.

// #include<stdio.h>
// int sum(int a ,int b){
//     return a+b;
// }
// int main(int argc, char const *argv[])
// {
//     int a,b,c;
//     a = 9;
//     b = 12;
//     c = a+b;
//     printf("%d\n",c);
//     return 0;
// }


// #include<stdio.h>
// int printstar(int n){
//     for(int i = 0; i<n; i++){

//     printf("%c",'*');
//     }
// }
// int main(int argc, char const *argv[])
// {
//     printstar(7);

//     return 0;
// }

// write a code of multiplication of table take input from the user.

#include<stdio.h>

int  table(int a)
{
    for(int i = 1; i<11; i++)
    {
        printf("%d X %d = %d\n",a,i,a*i);
    
    }
}
int main(int argc, char const *argv[])
{
    int a;
    printf("Enter the number of table you want to find: ");
    scanf("%d",&a);
    table(a);
    return 0;
}

