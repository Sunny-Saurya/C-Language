// Do while loop
// # include <stdio.h>
// int main()
// {
//     int i = 0;
//     do
//     {
//         i = i + 1;
//         printf("%d\n",i);
//     } while (i<10);
    
//     return 0;
// }


// Take the input from the user.

# include <stdio.h>
int main()
{
    int num,i = 0;
    printf("Enter the number:\n");
    scanf("%d",&num);
    do
    {
        printf("%d\n",i);
        i = i + 1;
    } while (i<num);
    
    return 0;
}
