// Write the program to calculate the area of ractangle.

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a,b;
    printf("Enter the length of the rectangle:");
    scanf("%d",&a);

    printf("Enter the breadth of the rectangle:");
    scanf("%d",&b);

    printf("The area of the rectangle is: %d",a*b);
    return 0;
}
