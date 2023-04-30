#include <stdio.h>
#include <string.h>

int main()
{
    char s[1000001];
    scanf("%s", s);
    int sum = 0;
    for (int i = 0; i < strlen(s); i++)
    {
        // printf("%d", s[i] - '0');
        int out = s[i] - '0';
        sum = sum + out;
    }
    printf("%d", sum);
    return 0;
}