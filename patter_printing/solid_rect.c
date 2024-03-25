#include<stdio.h>
int main()
{
    int n,m;
    printf("Enter the number of line: "); 
    scanf("%d",&n);

    printf("Enter the number of stars: ");
    scanf("%d",&m);

    for(int i = 1; i<=n; i++) // remember: outer loop is for no. of lines you want.
    {
        for(int j = 1; j<=n; j++) // inter loop is for no. of start you want to print in each line.
        {
            printf("%d",i);
        }
        printf("\n"); // har line ke baad enter marne ke liye hai. basically for a new line.
    }
}