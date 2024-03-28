// Writre a code to find the greater number between two number. take both number from the user.

/*#include <stdio.h>
int main()
{
    int num1,num2;
    printf("Enter any number 1:\n");
    scanf("%d",&num1);

    printf("Enter any number 2:\n");
    scanf("%d",&num2);

    printf("You have entered %d as num1\n",num1);
    printf("You have entered %d as num2\n",num2);

    if (num1>num2){
        printf("%d is greater than %d\n",num1,num2);
    }
    else if(num1 == num2){
        printf("%d is equal to %d\n",num1,num2);
    }
    else if(num2>num1){
        printf("%d is greater than %d\n",num2,num1);
    }
    else{
        printf("Enter a valid number\n");
    }
    return 0;
}*/

#include <stdio.h>
int main()
{
    int subject;
    printf("The list of subjects which you have passed has been given below\n");
    printf("  1. Science only\n 2. Maths only\n 3. Both Science and Maths\n");
    printf("Choose one of the options above: ");
    scanf("%d", &subject);
    if (subject == 1)
    {
        printf("Hurrayy! You have won 15 rupees");
    }
    else if (subject == 2)
    {
        printf("Hurrayy! You have won 15 rupees");
    }
    else if (subject == 3)
    {   
        printf("Hurrayy! You have won 45 rupees");   
    }
    else
    {
        printf("You have made an invalid choice!");
    }
    
    return 0;
}




