// SWITCH CASE STATEMENT

#include <stdio.h>
int main()
{
    int age;
    printf("Enter your age\n");
    scanf("%d",&age);
    switch (age)
    {
    case 18:
        printf("You are 18\n");
        break;

    case 20:
        printf("you are 20\n");

    default:
        printf("You are not 18 or 20\n");
        break;
    }
    return 0;
}

// Nested Switch Statement

#include <stdio.h>

int main()
{
    int age, marks;
    printf("Enter your age\n");
    scanf("%d", &age);

    printf("Enter your marks\n");
    scanf("%d", &marks);

    switch (age)
    {
        case 3:
            printf("The age is 3\n");
            switch (marks)
            {
                case 45:
                    printf("Your marks are 45");
                    break;
            
                default:
                    printf("your marks are not 45");
            }
            break;

        case 13:
            printf("The age is 13\n");
            break;

        case 23:
            printf("The age is 23\n");
            break;

        default:
            printf("Age is not 3, 13 or 23\n");
        
    }


    return 0;
}

