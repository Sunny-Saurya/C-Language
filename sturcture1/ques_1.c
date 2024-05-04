#include<stdio.h>
#include<string.h>

int main()
{
    struct book{
        char name[50];
        int price;
        int pages;
    } MyBook1,MyBook2,MyBook3;
    // Declare a structure of type "book" named "myBook1".

    strcpy(MyBook1.name,"Atomic Habits"); 
    MyBook1.price = 500;
    MyBook1.pages = 400;

    strcpy(MyBook2.name,"The monks who sold his ferrari"); 
    MyBook2.price = 329;
    MyBook2.pages = 312;

    strcpy(MyBook3.name,"The Alchamist"); 
    MyBook3.price = 150;
    MyBook3.pages = 399;

    printf("The price of the book is: %d\n",MyBook1.price);
    printf("The pages : %d\n",MyBook1.pages);
    printf("The book name is : %s\n",MyBook1.name);

    printf("The price of the book is: %d\n",MyBook2.price);
    printf("The pages : %d\n",MyBook2.pages);
    printf("The book name is : %s\n",MyBook2.name);

    printf("The price of the book is: %d\n",MyBook3.price);
    printf("The pages : %d\n",MyBook3.pages);
    printf("The book name is : %s\n",MyBook3.name);

}