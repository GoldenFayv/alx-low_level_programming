#include "main.h"
/**
 * main - Prints _putchar as a message.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char school[] = "_putchar";

	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(school[i]);
	}
	_putchar(10);
	return (0);
}
