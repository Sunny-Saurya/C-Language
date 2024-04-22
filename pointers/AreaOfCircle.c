#include<stdio.h>
int main()
{
    double rd;
    double area;

    double *prd = &rd;
    double *parea = &area;

    printf("Enter the radius of circle: ");
    scanf("%lf",prd);

    *parea = 3.14 * (*prd)*(*prd);
    printf("Area of circle is %.2lf",*parea);

}