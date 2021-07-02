#include "holberton.h"
/**
 * string_toupper - change the lowercase characteor to uppercase
 * @s: the pointer
 * Return: the catacters in uppercase.
 */
char *string_toupper(char *s)
{
    int c = 0;

    while (s[c] != '\0') 
    {
      if (s[c] >= 'a' && s[c] <= 'z') {
         s[c] = s[c] - 32;
      }
      c++;
    }
   return (s);
}
