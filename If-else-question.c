/*#include <stdio.h>
int main(int argc, char const *argv[])
{
    int marks;
    printf("Please enter your marks:\n");
    scanf("%d",&marks);

    if (marks>90){
        printf("Grade A");
    }
    else if (marks >80 && marks <=90){
        printf("Grade B");
    }
    else if (marks >60 && marks <=80){
        printf("Grade C");
    }
    else{
        printf("Sorry, you are fail");
    }
    return 0;
}*/

// Write a C program to check whether a number is negative, positive or zero.

/*#include <stdio.h>
int main()
{
    int a;
    printf("Enter the number to check: \n");
    scanf("%d",&a);
    if (a>0)
    {
        printf("Positive number");
    }
    else if (a<0)
    {
        printf("Negative number");
    }
    else
    {
        printf("Equal to 0");
    }

    return 0;
}*/

// Write a C program to check whether a number is divisible by 5 and 11 or not.

/*#include <stdio.h>
int main()
{
    int num;
    printf("Enter the number you want to check:\n");
    scanf("%d",&num);

    if (num % 5 == 0 && num % 11 == 0)
    {
        printf("Yes,%d divisible by both 5 and 11 \n",num);
    }
    else{
        printf("No, %d is not divisible by both 5 and 11 \n",num);
    }
    return 0;
}*/

// Write a C program to check whether a character is alphabet or not.

// #include <stdio.h>

// int main()
// {
//     char ch;

//     /* Input a character from user */
//     printf("Enter any character: ");
//     scanf("%c", &ch);

//     if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
//     {
//         printf("Character is an ALPHABET.");
//     }
//     else
//     {
//         printf("Character is NOT ALPHABET.");
//     }

//     return 0;
// }

// Write a C program to input any alphabet and check whether it is vowel or consonant.

/*#include <stdio.h>

int main()
{
    char ch;

    //  Input character from user
    printf("Enter any character: ");
    scanf("%c", &ch);


    // Condition for vowel
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' ||
       ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
    {
        printf("'%c' is Vowel.", ch);
    }
    else if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        //  Condition for consonant
        printf("'%c' is Consonant.", ch);
    }
    else
    {
        printf("'%c' is not an alphabet.", ch);
    }

    return 0;
}*/

// Write a C program to input any character and check whether it is alphabet, digit or special character.

#/*include <stdio.h>

int main()
{
    char ch;

    printf("Enter any character: ");
    scanf("%c", &ch);

    if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        printf("'%c' is alphabet.", ch);
    }
    else if(ch >= '0' && ch <= '9')
    {
        printf("'%c' is digit.", ch);
    }
    else 
    {
        printf("'%c' is special character.", ch);
    }

    return 0;
}*/

// Write a C program to check whether a character is uppercase or lowercase alphabet.

/*#include <stdio.h>
int main()
{
    char ch;
    printf("Enter any character:");
    scanf("%c",&ch);

    if(ch >= 'A' && ch <= 'Z')
    {
        printf("Yes, it is uppercase\n");
    }
    else
    {
        printf("its is lowercase\n");
    }
    return 0;
}*/

// Write a C program to input week number and print week day.

/*#include <stdio.h>
int main(int argc, char const *argv[])
{
    int num;
    printf("Enter any number from 1-7\n");
    scanf("%d",&num);

    if(num == 1){
        printf("'%d' is for SUNDAY\n",num);
    }
    else if(num == 2){
        printf("'%d' is for MONDAY\n",num);
    }
    else if(num == 3){
        printf("'%d' is for TUESDAY\n",num);
    }
    else if(num == 4){
        printf("'%d' is for WEDNESDAY\n",num);
    }
    else if(num == 5){
        printf("'%d' is for THRUSDAY\n",num);
    }
    else if(num == 6){
        printf("'%d' is for FRIDAY\n",num);
    }
    else if(num == 7){
        printf("'%d' is for SATURADAY\n",num);
    }
    else{
        printf("Enter a valid number.\n");
    }
    return 0;
}*/

// Write a C program to input month number and print number of days in that month.

/*#include <stdio.h>
int main(int argc, char const *argv[])
{
    int mon_num;
    printf("Enter any month numberr to check the days of that month:\n");
    scanf("%d",&mon_num);

    if(mon_num == 1 || mon_num == 3 || mon_num == 5 || mon_num == 7 || mon_num == 9 || mon_num == 12 )
    {
        printf("'%d' in this month there is 31 days",mon_num);
    }
    else if (mon_num == 2)
    {
        printf("'%d' in this month there is 27-28 days",mon_num);
    }
    else
    {
        printf("'%d' in this month there is 30 days ", mon_num);
    }
    return 0;
}*/

// Write a C program to count total number of notes in given amount. Logic to find minimum number of denomination for a given amount in C program.

// #include <stdio.h>
// int main(int argc, char const *argv[])
// {
//     int amount;
//     int note500, note100, note50, note20, note10, note5, note2, note1;

//     note500 = note100 = note50 = note20 = note10 = note5 = note2 = note1 = 0;

//     printf("Enter the total amount you have, to check the minimum number of notes:\n");
//     scanf("%d",&amount);

//     if(amount >= 500)
//     {
//         note500 = amount/500;
//         amount = amount-note500*500;
//     }
//     if(amount >= 100)
//     {
//         note100 = amount/100;
//         amount = amount-note100*100;
//     }
//     if(amount >= 50)
//     {
//         note50 = amount/50;
//         amount = amount-note50*50;
//     }
//     if(amount >= 20)
//     {
//         note20 = amount/20;
//         amount = amount-note20*200;
//     }
//     if(amount >= 500)
//     {
//         note10 = amount/10;
//         amount = amount-note10*10;
//     }
//     if(amount >= 5)
//     {
//         note5 = amount/5;
//         amount = amount-note5*5;
//     }
//     if(amount >= 2)
//     {
//         note2 = amount/2;
//         amount = amount-note2*2;
//     }
//     if(amount >= 1)
//     {
//         note1 = amount/1;
//         amount = amount-note1*1;
//     }

//     printf("Total number of notes are :\n");
//     printf("note500 = '%d'\n",note500);
//     printf("note100 = '%d'\n",note100);
//     printf("note50 = '%d'\n",note50);
//     printf("note20 = '%d'\n",note20);
//     printf("note10 = '%d'\n",note10);
//     printf("note5 = '%d'\n",note5);
//     printf("note2 = '%d'\n",note2);
//     printf("note1 = '%d'\n",note1);

//     return 0;

// }

// C program to check whether a character is alphabet or not

// #include <stdio.h>
// int main(int argc, char const *argv[])
// {
//     char c;
//     printf("Enter any character to check whether it is alphabet or not: ");
//     scanf("%c",&c);

//     if(c >='a' && c<='z'){
//         printf("Yes, this is an alphabets");
//     }
//     else{
//         printf("No, this is not an alphabet");
//     }
//     return 0;
// }

// Print day of week

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int  day;
    printf("Enter any number between 1 to 7 to get days: ");
    scanf("%d", &day);
    
    switch (day)
    {
    case 1:
        printf("It's Monday");
        break;
    case 2:
        printf("It's Tuesday");
        break;
    case 3:
        printf("It's Wednesday");
        break;
    case 4:
        printf("It's Thrusday");
        break;
    case 5:
        printf("It's Friday");
        break;
    case 6:
        printf("It's Saturday");
        break;
    case 7:
        printf("It's Sunday");
        break;

    default:
        printf("Enter the value as per the range(1-7)");
        break;
    }
    return 0;
}
