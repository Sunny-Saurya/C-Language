#include<stdio.h>

//typedef_oldName_newName

typedef float realNumber;
int main()
{
    int x;
    // float b; // it is storing a float value or decimal value. but we dont want to write float then  what can be done? we can use "typedef or macro concept" we want to write realNumber  instead of float.

    realNumber b = 3.144; // it doesn't throw an error, still it stores float value. 
    printf("%f",b);     // prints the floating point number i.e., 3.144000

}


// why do we use typedef ? 
/*
   In C programming language, a "typedef" is used to create new data types by associating a name with existing data type.
   */


#include<stdio.h>
int main()
{
    typedef struct pokemon{   // user defined data types
        int hp;
        int speed;
        int attack;
        char tier;
    } PW;

    // struct pokemon pikachu; // now you can write  "PW pikachu" instead of "struct pokemon pikachu"

    PW pikachu;
    pikachu.attack = 90;
    pikachu.hp = 60;
    pikachu.speed = 120;
    pikachu.tier = 'A';

    printf("%d", pikachu.attack);
    

}