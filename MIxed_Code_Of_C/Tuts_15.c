// For loop

/*#include <stdio.h>
int main()
{
    int i = 0;
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n",i);
    }
    
    return 0;
}*/

// Take input from hte user.

/*#include <stdio.h>
int main()
{
    int num, i = 0;
    printf("Enter the number: \n");
    scanf("%d",&num);

    for (int i = 0; i < num; i++)
    {
        printf("%d\n",i);
    }
    
    return 0;
}*/

// We can also initialize 2 or 3 variable. for eg;

#include <stdio.h>
int main()
{
    int j,i;
    for (j = 0,i = 0; i < 10; i++)
    {
        printf("%d %d \n",i,j);
    }
    
    return 0;
}

#include <stdio.h>

int main()
{
    printf("Hello World\n");
    int i, j=0;
    for(i=0 ;  ; )
    {
       printf("%d %d\n", i, j);
       i++;j++;
    }
    
    return 0;
}

