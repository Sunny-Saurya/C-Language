// **************** ARITHMATIC OPERATOR ********************

// #include <stdio.h>

// int main(int argc, char const *argv[])
// {
//     int a,b;
//     a = 60;
//     b = 40;
//     printf("The sum of a and b is = %d \n",a+b);
//     printf("The sum of a and b is = %d \n",a-b);
//     printf("The sum of a and b is = %d \n",a*b);
//     printf("The sum of a and b is = %d \n",a/b);
//     printf("The sum of a and b is = %d \n",a%b);
//     return 0;
// }

// #include <stdio.h>

// int main(int argc, char const *argv[])
// {

//     int a = 6;
//     float b = 4.3;
//     printf("The sum of a and b is = %f \n",a+b);
//     printf("The sum of a and b is = %f \n",a-b);
//     printf("The sum of a and b is = %f \n",a*b);
//     printf("The sum of a and b is = %f \n",a/b);
//     // printf("The sum of a and b is = %f \n",a%b);
//     return 0;
// }


// ******************** RELATIONAL OPERATOR **********************

// #include <stdio.h>
// int main(int argc, char const *argv[])
// {
//     int a = 50;
//     int b = 50;

//     printf("a == b = %d \n", a==b);  1  means Yes/True
//     printf("a == b = %d \n", a!=b);  0 means No/False
//     printf("a == b = %d \n", a>b);
//     return 0;
// }


// ******************** LOGICAL OPERATOR **********************

// AND = && , OR = || , NOT = !

// #include <stdio.h>
// int main(int argc, char const *argv[])
// {
//     int a = 50;
//     int b = 5;

//     printf("a && b = %d \n ",a && b);
//     printf("a && b = %d \n ",a || b);
//     printf("a && b = %d \n ",!b);

//     printf("a == b = %d \n", a==b); 
//     printf("a != b = %d \n", a!=b); 
//     printf("a > b = %d \n", a>b);
//     return 0;
// }

// ********************* BITWISE OPERATOR ***********************

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a = 2;
    int b = 3;

    printf("a & b = %d \n ",a & b);
    printf("a && b = %d \n ",a | b);
    printf("a && b = %d \n ",a^b);

    return 0;
}
