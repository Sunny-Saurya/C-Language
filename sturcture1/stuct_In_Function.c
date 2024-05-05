
#include<stdio.h>
    typedef struct pokemon{   // global structure we can use anywhere in fucntion.
        int hp;
        int speed;
        int attack;
        char tier;
    }pokemon;

void fun(pokemon p)
{
    printf("Hello Pikachu, Your attack power is : %d",p.attack);
    return;
}
int main()
{
    pokemon pikachu; 
    pikachu.attack = 60;
    fun(pikachu);
}