#include <stdio.h>

/**
* main - print hex from 0-f
* Return: 0
*/

int main(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
		putchar(i + '0');
	for (j = 'a'; j <= 'f'; j++)
		putchar(j);
	putchar('\n');
	return (0);
}
