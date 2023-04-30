#include <stdio.h>

int main()
{
    int i, i1 = 4;
    double d, d1 = 4.0;
    char a[100];
    // scanf("%s", &a);
    char s[] = "hack";
    scanf("%d", &i);
    scanf("%lf\n", &d);
    gets(a);
    // int sz = sizeof(a) / sizeof(char);
    // printf("%d", sz);
    printf("%d\n", i + i1);
    printf("%.1lf\n", d + d1);
    printf("%s ", s);
    printf("%s\n", a);
    printf("\n");
    return 0;
}