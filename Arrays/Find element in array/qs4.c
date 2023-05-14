#include <stdio.h>
int main()
{
    int a[15], i, key;

    printf("Enter 15 elements in array :\n");
    for (i = 0; i < 15; i++)
        scanf("%d", &a[i]);

    printf("Enter the key : ");
    scanf("%d", &key);

    for (i = 0; i < 15; i++)
    {
        if (a[i] == key)
        {
            printf("Element found : %d",key);
            return 0;
        }
    }

    printf("Element  not  found");
}