#include <string.h>
#include <stdlib.h>

void expand(char *s, int l, int r, int *bestStart, int *bestLen)
{
    int n = strlen(s);

    while(l >= 0 && r < n && s[l] == s[r])
    {
        l--;
        r++;
    }

    l++;
    r--;

    if(r - l + 1 > *bestLen)
    {
        *bestStart = l;
        *bestLen = r - l + 1;
    }
}

char* longestPalindrome(char* s)
{
    int n = strlen(s);

    int bestStart = 0;
    int bestLen = 1;

    for(int i = 0; i < n; i++)
    {
        // Odd length
        expand(s, i, i, &bestStart, &bestLen);

        // Even length
        expand(s, i, i + 1, &bestStart, &bestLen);
    }

    char *result = malloc(bestLen + 1);

    for(int i = 0; i < bestLen; i++)
    {
        result[i] = s[bestStart + i];
    }

    result[bestLen] = '\0';

    return result;
}