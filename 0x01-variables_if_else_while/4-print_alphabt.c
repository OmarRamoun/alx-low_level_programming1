#include <stdio.h>

/**
* main - print alphabet
* Description: except q and e
* Return: 0 success
*/

int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
		if (a != 'q' && a != 'e')
			putchar(a);

	putchar('\n');
	return (0);
}
