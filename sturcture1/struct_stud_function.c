#include<stdio.h>
#include<string.h>

typedef struct student_details
{
    char name[100];
    int roll;
    char department[50];
    char course[50];
    int year;   
}stud;

void checkEqual(stud s1,stud s2)
{
    if(strcmp(s1.course,s2.course)==0)
    {
        printf("Both have same course");
    }
    else printf("Both have different course");
}

int main()
{
    stud s1;
    strcpy(s1.name,"John Doe");
    s1.roll=23;
    strcpy(s1.department,"Btech");
    strcpy(s1.course,"Computer Science and Engineering");
    s1.year = 4;

    stud s2;
    strcpy(s2.name,"Roman");
    s2.roll=13;
    strcpy(s2.department,"BPharma");
    strcpy(s2.course,"Information Technology");
    s2.year = 4;

    checkEqual(s1,s2);
    
}