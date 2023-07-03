#include "main.h"
#include <stdio.h>

/**
 *print_chessboard - Entry point
 *@a: row
 *Return: nothing
 */
void print_chessboard(char (*a)[8])
{
	int itr, jtr;

	for (itr = 0; itr < 8; itr++)
	{
		for (jtr = 0; jtr < 8; jtr++)
		{
			_putchar(a[itr][jtr]);
		}
		_putchar('\n');
	}
}
