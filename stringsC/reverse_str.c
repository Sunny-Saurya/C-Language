#include<stdio.h>
#include<string.h>
int main()
{
    // char str[50];
    // gets(str);
    // puts(str);


    char str[50];
    puts("Enter a string: ");
    gets(str);  // %s is used to read the string entered by user
    // puts automatically gives \n
    
    int size = 0;
    int k = 0;
    while(str[k] != '\0')
    {
        size++;
        k++;
    }
    printf( "Size= %d\n",size);
    int j;
    for(int i =0, j=size-1; i<=j; i++,j--)
    {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
    puts("The reverse string is: ");
    puts(str);






}