#include <stdio.h>
#include <string.h>

int main()
{
    typedef struct pokemon
    {
        int hp;
        int speed;
        int attack;
        char tier;
        char name[15];
    } pokemon;

    pokemon arr[3];

    strcpy(arr[0].name, "Charizard");
    arr[0].attack = 100;
    arr[0].hp = 50;
    arr[0].speed = 40;
    arr[0].tier = 'A';
    printf("\n");

    strcpy(arr[1].name, "Pikachu");
    arr[1].attack = 50;
    arr[1].hp = 150;
    arr[1].speed = 140;
    arr[1].tier = 'B';

    printf("\n");
    strcpy(arr[2].name, "Balwasaur");
    arr[2].attack = 150;
    arr[2].hp = 300;
    arr[2].speed = 200;
    arr[2].tier = 'G';

    for (int i = 0; i < 3; i++)
    {
        printf("Name: %s\n", arr[i].name);
        printf("Attack : %d\n", arr[i].attack);
        printf("Hp: %d\n", arr[i].hp);
        printf("Speed: %d\n", arr[i].speed);
        printf("Tier: %d\n", arr[i].tier);
    }
    printf("\n");
}