// STRINGS.

#include<stdio.h>
int main()
{
    char arr[] = {"Hello World"};
    char a[] = {"Hello World I am sunny kumar\0"};

    int i = 0;
    // while(i<11)
    // {
    //     printf("%c",arr[i]);
    //     i++;
    // }

    // while(a[i] != '\0')
    // {
    //     printf("%c",a[i]);
    //     i++;
    // }

// MOdifying of string ;


    char str[] = "Sunny Kumar";
    str[0] = 'H';
    str[1] = 'a';  // not throws an error.
    printf("Modified String : %s \n",str);
    int j= 0;
    while(str[j] != '\0')
    {
        printf("%c ",str[j]); // all gives the same output
        printf("%c ",j[str]);
        printf("%c ",*(str+i));
        printf("%c ",*(i+str));

        j++;

    }
}