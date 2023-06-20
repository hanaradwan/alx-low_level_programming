#include "main.h"
/**
 * _isalpha - function to check if characte
 * r is letter both lowercase or uppecase
 *
 * @c: takes input from other function
 *
 * Return: returns 1 if c is true else 0
*/

int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
