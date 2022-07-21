// Author: PARISHKAR SINGH, C 2022 //
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef long long ll;
#define calcsize(x) sizeof(x) / sizeof(x[0])
#define fx(i, x, n) for (long long i = x; i < n; i++)
// #TODO: Figure out what to comment here. //

void append(char *s, char c)
{
    int len = strlen(s);
    s[len] = c;
    s[len + 1] = '\0';
}

char *strip(char str[])
{
    ll start = 0, min = 3;
    char *newString = malloc(100);
    strcpy(newString, "");
    while (start < strlen(str))
    {
        char c = str[start];
        ll rep = 1;
        while (c == str[start + rep] && start + rep < strlen(str))
            rep++;
        if (rep < min)
        {
            fx(i, 0, rep)
            {
                append(newString, c);
            }
        }
        start += rep;
    }
    return newString;
}

int main()
{
    char *str = malloc(100);
    strcpy(str, "MNHHHHNNM");
    int n = calcsize(str);
    while (n--)
    {
        strcpy(str, strip(str));
    }
    puts(str);
    return 0;
}