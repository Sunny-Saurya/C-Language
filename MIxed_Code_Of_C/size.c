// #include <stdio.h>

// int main(int argc, char const *argv[])
// {
//     printf("%lu",sizeof(int));
//     printf("%lu",sizeof(float));
//     printf("%lu",sizeof(double));
//     return 0;
// }

#include <stdio.h>
int main()
{
    char ch;
    printf("Enter any character:\n");
    scanf("%c",&ch);

    if(ch=="a" || ch=="A" || ch == "e" || ch == "E" || ch == "i" || ch == "I" || ch == "o" || ch == "O" || ch == "u" || ch == "U"){
        printf("Yes, '%c' is an ALPHABET",ch);
    }
    else{
        printf("%c is a consonant",ch);

    }
    return 0;
}
