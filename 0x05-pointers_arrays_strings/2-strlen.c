#include "holberton.h"
#include <string.h>
/**
 * _strlen
 * @s: the pointer
 * Return: returns the length of string
 */
int _strlen(char *s)
{
    int l = 0;

    for (l = 0; s[l] != '\0'; l++);

    return (l);
}