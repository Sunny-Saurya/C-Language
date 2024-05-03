#include<stdio.h>
#include<string.h>

int main()
{
    typedef struct cricketer_details_array_struc
    {
        char name[50];
        int age;
        int total_matches;
        float avg;
    }cricketer;

    cricketer arr[3];
    

    for(int i = 0; i<3;i++) {
        scanf("%s", &arr[i].name);
        scanf("%d",&arr[i].age);
        scanf("%d",&arr[i].total_matches);
        scanf("%f",&arr[i].avg);
    }
    for(int i = 0; i<3;i++) {
        printf("Name: %s\n", arr[i].name);
        printf("Age: %d\n", arr[i].age);
        printf("Total matches: %d\n", arr[i].total_matches);
        printf("Average Runs: %.2f \n", arr[i].avg);
    }
    
}