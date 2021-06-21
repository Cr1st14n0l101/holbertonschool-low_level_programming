#include "holberton.h"
/**
 * print_alphabet_x10 - Print the alphabet 10 times
 */

void print_alphabet_x10(void)
{
  char ch, n;
  for(n = 0; n <= 9; n++)
    {
      for(ch = 'a'; ch <= 'z'; ch++)
        {
          _putchar(ch);
        }
      _putchar('\n');
    }
}
