#include<stdio.h>
int main()
{
    struct pokemon{   // user defined data types
        int hp;
        int speed;
        int attack;
        char tier;
    };
    struct legendaryPokemon{
        int specialPower;  // extra attribute for the Pokemon
        struct pokemon x;
    };

    struct pokemon pikachu;
    pikachu.attack = 90;
    pikachu.hp = 60;
    pikachu.speed = 120;
    pikachu.tier = 'A';

    printf("%d", pikachu.attack);
    // printf("%d",pikachu.x.specialPower);

}