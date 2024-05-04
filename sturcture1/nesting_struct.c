#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main(){

    typedef struct pokemon
    {
        int hp;
        int speed; 
        int attack;
    }pokemon;

    typedef struct legendaryPokemon
    {
        pokemon normal;
        char ability[30];
    }legendaryPokemon;

    legendaryPokemon mewTwo;

    strcpy(mewTwo.ability,"Pressure");  // we can do directly
    printf("Ability: %s",mewTwo.ability); // we can do directly

    // mewTwo.hp // we can not do like this.

    mewTwo.normal.hp = 150;
    printf("\nHp: %d",mewTwo.normal.hp); // so this is how we can fatch data from nesting structures.

    
    
}