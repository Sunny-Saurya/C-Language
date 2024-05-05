#include<stdio.h>
#include<string.h>

int main()
{
    typedef struct student_details_array_struc
    {
        char name[50];
        int roll;
        int stud_id;
        char course[20];
        int year;
    }Sdetails;

    Sdetails arr[10];
    
    strcpy(arr[0].name, "John ");
    arr[0].roll = 13;
    arr[0].stud_id = 1230;
    strcpy(arr[0].course,"BSC IT");
    arr[0].year = 4;

    strcpy(arr[1].name, "Deo");
    arr[1].roll = 13;
    arr[1].stud_id = 1230;
    strcpy(arr[1].course,"BSC IT");
    arr[1].year = 4;

    strcpy(arr[2].name, "Dev");
    arr[2].roll = 13;
    arr[2].stud_id = 1230;
    strcpy(arr[2].course,"BSC IT");
    arr[2].year = 4;
    
    strcpy(arr[3].name, "jonny");
    arr[3].roll = 13;
    arr[3].stud_id = 1230;
    strcpy(arr[3].course,"BSC IT");
    arr[3].year = 4;

    strcpy(arr[4].name, "Ayush");
    arr[4].roll = 13;
    arr[4].stud_id = 1230;
    strcpy(arr[4].course,"BSC IT");
    arr[4].year = 4;

    
    strcpy(arr[5].name, "Sunny");
    arr[5].roll = 13;
    arr[5].stud_id = 1230;
    strcpy(arr[5].course,"BSC IT");
    arr[5].year = 4;

    
    strcpy(arr[6].name, "Basu");
    arr[6].roll = 13;
    arr[6].stud_id = 1230;
    strcpy(arr[6].course,"BSC IT");
    arr[6].year = 4;

    
    strcpy(arr[7].name, "Vishal");
    arr[7].roll = 13;
    arr[7].stud_id = 1230;
    strcpy(arr[7].course,"BSC IT");
    arr[7].year = 4;

    
    strcpy(arr[8].name, "John Deo");
    arr[8].roll = 13;
    arr[8].stud_id = 1230;
    strcpy(arr[8].course,"BSC IT");
    arr[8].year = 4;

    strcpy(arr[9].name, "John Deo");
    arr[9].roll = 13;
    arr[9].stud_id = 1230;
    strcpy(arr[9].course,"BSC IT");
    arr[9].year = 4;

    for(int i = 0; i<10;i++) {
        printf("%s", arr[i].name);
        printf("%d", arr[i].roll);
        printf(" %ld\n", arr[i].stud_id);
        printf("%s ", arr[i].course);
        printf("%d \n", arr[i].year);
    }
    
}