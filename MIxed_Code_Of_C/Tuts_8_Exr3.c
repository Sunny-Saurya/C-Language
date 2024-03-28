// Write the program to find the area of circel and also modify that program and also find the area of cylinder by taking the radius and height from the user as an input.

// #include <stdio.h>
// int main()
// {
//     int r;
//     printf("Enter the radius of the circle: ");
//     scanf("%d",&r);

//     printf("The area of the circle is %f",3.14*r*r);
//     return 0;
// }

// NOW GOING TO MODIFY THIS.

#include <stdio.h>
int main()
{
    int r,h;
    printf("Enter the radius of the cylinder: ");
    scanf("%d",&r);

    printf("Enter the height of the cylinder: ");
    scanf("%d",&h);

    printf("The area of the cylinder is %f",(2*3.14*r)*(r+h));
    return 0;
}
