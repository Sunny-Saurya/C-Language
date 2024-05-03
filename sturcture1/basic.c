#include<stdio.h>
int main()
{
    struct pokemon{   // user defined data types
        int hp;
        int speed;
        int attack;
        char tier;
    };

    struct pokemon pikachu;
    pikachu.attack = 90;
    pikachu.hp = 60;
    pikachu.speed = 120;
    pikachu.tier = 'A';

    struct pokemon charizard;
    charizard.attack = 190;
    charizard.hp = 160;
    charizard.speed = 80;
    charizard.tier = 'S';

    struct pokemon mewtow;
    mewtow.attack = 200;
    mewtow.hp = 100;
    mewtow.speed = 200;
    mewtow.tier = 'G';

    struct pokemon Bulbasaur;
    printf("Enter the attack of Bulbasaur: ");
    scanf("%d",&Bulbasaur.attack);
    printf("Enter the attack of Bulbasaur: ");
    scanf("%d",&Bulbasaur.hp);
    printf("Enter the attack of Bulbasaur: ");
    scanf("%d",&Bulbasaur.speed);
    printf("Enter the attack of Bulbasaur: ");
    scanf("%c",&Bulbasaur.tier);

    // printf("%d\n",pikachu.attack);    // access by using dot operator
    // printf("%d\n",charizard.attack);
    // printf("%d\n",mewtow.attack);

    printf("%d",Bulbasaur.attack);
}