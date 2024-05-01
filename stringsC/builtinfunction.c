#include<stdio.h>
#include<string.h>

int main()
{
    // strlen
    // char str[] = "Hey, I am Sunny";
    // int x = strlen(str); 
    // printf("The length of the string is %d",x);

    //strcpy

    // char str[20] = "Hey, Guys";
    // char str1[20];
    // strcpy(str1,str);
    // printf("%s",str1);

    // strcat
    char str[20] = "Hey, Guys ";
    char str1[20] = "I am sunny ";
    strcat(str,str1);
    printf("%s",str);
} 