#include<stdio.h>
int main()
{
    int num,fact=1,i;
    printf("The number is:\n");
    scanf("%d",&num);
    for(i=1;i<=num;++i)
    {
        fact=fact*i;
    }
    printf("\nThe factorial is %d.",fact);
    return 0;
}
