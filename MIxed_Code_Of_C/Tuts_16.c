// Break and continue statement: 

/*#include <stdio.h>
int main()
{
    int i, age;
    for(i = 0; i <= 10; i++)
    {
        printf("Enter you age: ");
        scanf("%d",&age);
        if (age>10){
            break;
        }
        else{
            printf("Enter you age: ");
        scanf("%d",&age);
        }
    }
    return 0;
}*/


#include <stdio.h>
int main()
{
    int i, age;
    for(i = 0; i <= 10; i++)
    {
        printf("Enter you age: ");
        scanf("%d",&age);
        if (age>10){
            continue;;
        }
        printf("Ohhh ! my goodness. ");
    }
    return 0;
}