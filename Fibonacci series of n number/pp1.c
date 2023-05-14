#include<stdio.h>
int main()
{
    int a=0,b=1,c,n,i;
    printf("Enter the limit:\n");
    scanf("%d",&n);
    printf("\n%d\n%d",a,b);
    for(i=1;i<n;++i){
        c=a+b;
    printf("\n%d",c);
    a=b;
    b=c;
    }
    return 0;
}