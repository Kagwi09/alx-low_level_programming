#include <ctype.h>
#include "main.h"
/**
**cap_string - capitalizes all words of a string
*@s: the string
*Return: s
*
*/
char *cap_string(char *s)
{
int i = 0;

while (s[i])
{

if (i == 0 || s[i - 1] == ' ' || s[i - 1] == '\t' ||
s[i - 1] == '\n' || s[i - 1] == ',' || s[i - 1] == ';' ||
s[i - 1] == '.' || s[i - 1] == '!' || s[i - 1] == '?' ||
s[i - 1] == '"' || s[i - 1] == '(' || s[i - 1] == ')' ||
s[i - 1] == '{' || s[i - 1] == '}')
{
s[i] = toupper(s[i]);
}
else
{
s[i] = tolower(s[i]);
}
i++;
}

return (s);
}

