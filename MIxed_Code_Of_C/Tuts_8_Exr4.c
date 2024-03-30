// Write a program to convert celcius into fehreiheit.

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int c;
    printf("Enter the celcius that you want to covert in: ");
    scanf("%d",&c);

    printf("After the coversion of %d into fehrenhit is %f",c,(c*1.8)+32);
    return 0;
}


