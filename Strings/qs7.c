#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter the line no. : \n");
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
        for(j=n;j>=1;j--)
        {
        if(j>i)
        printf(" ");
        else
        printf("*");
        }
        printf("\n");
    }
    return 0;
}