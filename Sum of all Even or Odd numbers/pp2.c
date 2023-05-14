#include<stdio.h>
int main()
{
    int a,b,c,d,i;
    c=0;
    d=0;
    printf("Enter lower limit:\n");
    scanf("%d",&a);
    printf("Enter upper limit:\n");
    scanf("%d",&b);
    for(i=a;i<=b;i++){
        if(i%2==0)
        c+=i;
    else
        d+=i;
    }
    printf("\nSum of all even numbers: %d\n",c);
    printf("\nSum of sll odd numbers: %d\n",d);
    return 0;
}
