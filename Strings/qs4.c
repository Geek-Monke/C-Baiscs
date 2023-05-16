#include<stdio.h>
#include<string.h>
int main(){
    char s1[] = "arijeet";
    char s2[] = " ghosh";

    //printf("The length is %lu\n");
    strcat(s1,s2);
    puts(s1);
    return 0;
}