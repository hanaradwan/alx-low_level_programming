#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print a - z in reverse
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	int digit = 48; /*decimap rep of 0*/

	while (digit <= 102)
	{
		putchar(digit);
		/*after 9 we jump till 96*/
		if (digit == 57)
			digit += 39;
		digit++;
	}
	putchar('\n');
	return (0);
}

