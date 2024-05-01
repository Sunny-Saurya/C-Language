#include<stdio.h>
#include<stdio.h>
int main()
{
    // char str[20] = "Sunny Kumar";
    
    // for(int i =  13; i>=2;i--)
    // {
    //     str[i+1] = str[i];
    // }
    // str[2] = 'K';
    // printf("%s",str);

    // input take from user.
    char str[20];
    printf("Enter  a string : ");
    // scanf("%s",str);   // scanf dont print the string after space;
                        // use gets or fgets instead of scanf to get the whole string.
    gets(str);
    printf("Your entered string is: %s",str);

    int i = 0;
    int size = 0;
    while(str[i] != '\0')
    {
        size++;
        i++;
    }
    printf("\nsize of string is : %d\n",size);
    

}