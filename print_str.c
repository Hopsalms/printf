#include "main.h"

/**
 * _strlen - finds the lenght of a string.
 * @s: string
 * Return: integer.
 */

int _strlen(char *str)
{
	int c;

	for (c = 0; str[c] != 0; c++)
		;
	return (c);

}

/**
 * _strlenc - finds length of a string but for constant characters
 * @s: string
 * Return: integer
 */

int _strlenc(const char *str)
{
	int c;

	for (c = 0; str[c] != 0; c++)
		;
	return (c);
}
