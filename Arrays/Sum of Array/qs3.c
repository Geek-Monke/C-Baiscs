#include <stdio.h>
int main()
{
    int arr[15], i, sum = 0;
    printf("Enter array elements :\n");
    for (i = 0; i < 15; i++)
        scanf("%d", &arr[i]);
    for (i = 0; i < 15; i++)
        sum = sum + arr[i];
    printf("Sum of the array = %d\n", sum);

    return 0;
}