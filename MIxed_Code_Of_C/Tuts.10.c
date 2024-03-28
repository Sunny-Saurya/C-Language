//  CONDITIONAL STATEMENT 

/*#include <stdio.h>
int main()
{
    int age;
    printf("Enter your age:\n");
    scanf("%d",&age);
    printf("You have entered %d age",age);

    if(age>=18){
        printf("Congratulation, you are eligible to vote\n");
    }
    return 0;
}*/

// If statement 

/*#include <stdio.h>
int main()
{
    int age;
    printf("Enter your age:\n");
    scanf("%d",&age);
    printf("You have entered %d age",age);

    if(age>=18){
        printf("Congratulation, you are eligible to vote\n");
    }
    else{
        printf("sorry, you are not eligible");
    }
    return 0;
}*/

// if else if statement.

#include <stdio.h>
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
}


