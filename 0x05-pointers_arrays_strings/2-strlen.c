#include "main.h"
/**
 * _strlen - return the length of the string
 * @s: string
 * Return: length
 */

int _strlen(char *s)
{
	int strlen = 0;

	while (*s != '\0')
	{
		strlen++;
		s++;
	}
	return (strlen);
}
