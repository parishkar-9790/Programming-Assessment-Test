// Author: PARISHKAR SINGH, C++ 2022 //
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>
#include <string.h>
typedef long long ll;
#define calcsize(x) sizeof(x) / sizeof(x[0])
#define fx(i, x, n) for (long long i = x; i < n; i++)
// #TODO: Figure out what to comment here. //
int main()
{
    char *str = malloc(100);
    printf("Enter the password to check:-> ");
    scanf("%s", str);
    bool character, digi, special;
    character = digi = special = false;
    while (*str != '\0')
    {
        if (isalpha(*str))
            character = true;
        else if (isdigit(*str))
            digi = true;
        else
            special = true;
        if (digi && special && character)
            break;
        str++;
    }
    if (digi && special && character)
        printf("The password is strong\n");
    else if (digi && character)
        printf("the password is moderate");
    else
        printf("The password is weak");
    return 0;
}