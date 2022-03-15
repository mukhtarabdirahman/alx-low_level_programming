#include "main.h"
/**
 *print_alphabet - prints 10 times the alphabet
 * followed by a new line
 * Descrition: prints 10 times the alphabet in lowercase
 * Return: void
*/
void print_alphabet_x10(void)
{
	int i, a;

		for (i = 0; i <= 9; i++)
	{
		for (a = 97; a <= 122; a++)
	{
		_putchar(a);
	}
		_putchar('\n');
	}
}
