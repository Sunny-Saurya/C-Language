#include<stdio.h>
int main()
{
    int n,m;
    printf("Enter the number of rows and columns: ");
    scanf("%d%d",&n,&m);


    for(int i = 1; i<=n; i++)
    {
        if(i % 2 == 0)
        {
            for(int j = 1; j<=i; j++)
        {
            printf("%c ",'A'+j-1);
        }
        }
        else{
            for(int j = 1; j<=i; j++)
            {
                printf("%d ",j);
            }
        }
        printf("\n");
        
    }
}