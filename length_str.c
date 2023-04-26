#include <stdio.h>
#include <string.h>

int main()
{
    char a[100];
    scanf("%s", a);
    int str = strlen(a);
    int count = 0;
    for (int i = 0; a[i] != '\0'; i++)
    {
        /* code */
        count++;
    }
    printf("%d\n", count);
    printf("%s\n", a);
    printf("\n");
    return 0;
}