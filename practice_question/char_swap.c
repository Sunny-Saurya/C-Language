#include<stdio.h>
char swapcase(char ch)
{
    if(ch>='a' && ch<='z') // uppercase
    {
        return ch-32;
    }
    if(ch>='A' && ch<='Z')
    {
        return ch+32;
    }
}
int main()
{
    char ch;
    char ch1,ch2;
    printf("Enter ch1 and ch2: ");
    scanf("%c %c",&ch1,&ch2);

    ch1 = swapcase(ch1);
    ch2 = swapcase(ch2);
    printf("\n After swapping %c %c",ch2,ch1);

}