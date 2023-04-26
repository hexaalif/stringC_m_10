#include <stdio.h>
#include <string.h>

int main()
{
    char s[1001], t[1001];
    gets(s);
    gets(t);

    // scanf("%s", &t);
    int count1 = strlen(s);
    int count2 = strlen(t);
    // for (int i = 0, j = 0; s[i] != '\0', t[i] != '\0'; i++, j++)
    // {
    //     count1++;
    //     count2++;
    // }
    printf("%d %d\n", count1, count2);
    printf("%s %s\n", s, t);
    return 0;
}