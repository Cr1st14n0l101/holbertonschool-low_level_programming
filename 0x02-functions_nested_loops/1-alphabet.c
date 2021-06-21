#include <stdio.h>
#include "holberton.h"
/** 
 * print_alphabet - Print the alphabet
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
  char a;
  for(a = 'a'; a <= 'z'; a++)
    {
      putchar(a);
    }
  putchar('\n');
}
