// While Loop

/*#include <stdio.h>
int main()
{
    int i = 0;
    while (i<30)
    {
        printf("%d\n",i);
        i = i + 1;
    }
    return 0;
}*/

// Take input from the user.

#include <stdio.h>
int main()
{
    int num, i = 0;
    printf("Enter the number :\n");
    scanf("%d",&num);

    while (i<=num)  
    {
        printf("%d\t",i);
        i += 1;
    }
    
    return 0;
}
