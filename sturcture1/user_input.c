#include<stdio.h>
int  main()
{
    struct pokemon{
        int hp;
        int speed;
        int attack;
        char tier;
    };

    struct pokemon Bulbasaur;
    printf("Enter the attack of Bulbasaur: ");
    scanf("%d",&Bulbasaur.attack);
    // printf("Enter the attack of Bulbasaur: ");
    // scanf("%d",&Bulbasaur.hp);
    // printf("Enter the attack of Bulbasaur: ");
    // scanf("%d",&Bulbasaur.speed);
    // printf("Enter the attack of Bulbasaur: ");
    // scanf("%c",&Bulbasaur.tier);

    printf("%d",Bulbasaur.attack);
}