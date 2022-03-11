#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, and then in uppercase,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int jk;

	for (jk = 'a'; jk <= 'z'; jk++)
		putchar(jk);
	for (jk = 'A'; jk <= 'Z'; jk++)
		putchar(jk);
	putchar('\n');
	return (0);
}
