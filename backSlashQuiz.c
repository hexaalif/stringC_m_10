#include <stdio.h>

int main()
{
    int a[6];
    scanf("%s", a);
    for (int i = 0; a[i] != '\\'; i++)
    {
        printf("%d", a);
    }
    return 0;
}