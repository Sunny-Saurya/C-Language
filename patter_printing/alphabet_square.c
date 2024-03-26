#include<stdio.h>
int main()
{
    int n,m;
    printf("Enter number of rows: ");
    scanf("%d",&n);
    printf("Enter numbner of columns: ");
    scanf("%d",&m);

    for(int i = 1; i<=n; i++)
    {
        for(int j = 1; j<=n; j++)
        {
            printf("%c",'A'+j-1);
        }
        printf("\n");
    }
}