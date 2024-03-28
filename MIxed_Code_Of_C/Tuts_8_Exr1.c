/*Print the multiplication table of the number that is given by the user.*/

#include <stdio.h>
int main()
{
    int a,b;
    b = 11;
    printf("Enter the number you want the multiplication of:");
    scanf("%d",&a);
    printf("%d X 1 = %d\n",a,a*1);
    printf("%d X 2 = %d\n",a,a*2);
    printf("%d X 3 = %d\n",a,a*3);
    printf("%d X 4 = %d\n",a,a*4);
    printf("%d X 5 = %d\n",a,a*5);
    printf("%d X 6 = %d\n",a,a*6);
    printf("%d X 7 = %d\n",a,a*7);
    printf("%d X 8 = %d\n",a,a*8);
    printf("%d X 9 = %d\n",a,a*9);
    printf("%d X 10 = %d\n",a,a*10);

    printf("%d X 1 = %d\n",a,a*(b-10));
    printf("%d X 2 = %d\n",a,a*(b-9));
    printf("%d X 3 = %d\n",a,a*(b-8));
    printf("%d X 4 = %d\n",a,a*(b-7));
    printf("%d X 5 = %d\n",a,a*(b-6));
    printf("%d X 6 = %d\n",a,a*(b-5));
    printf("%d X 7 = %d\n",a,a*(b-4));
    printf("%d X 8 = %d\n",a,a*(b-3));
    printf("%d X 9 = %d\n",a,a*(b-2));
    printf("%d X 10 = %d\n",a,a*(b-1));
    return 0;
}
