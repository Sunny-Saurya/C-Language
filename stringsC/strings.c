#include<stdio.h>
#include<string.h>
int main()
{
    char str[] = "Hey Everyone! I am Sunny! ";
    // printf("%s ",str); both give the same asewer.
    puts(str);

    char name[50];
    // scanf("%s",name);   // only the first word is observed or output. instead of doing that we can use get, and puts.

    gets(name); // take entire string
    printf("You input is: %s",name);
    return 0;
}