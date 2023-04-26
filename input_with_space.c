#include <stdio.h>

int main()
{
    char a[18];
    // gets(a);
    fgets(a, 18, stdin);
    a[10] = '\0';
    printf("%s", a);
    return 0;
}