#include <stdio.h>
/**
 * main - Prints the alphabet.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabets[] = "abcdefghijklmnopqrstuvwxyz";
	int x;

	for (x = 25; x >= 0; x--)
	{
		putchar(alphabets[x]);
	}
	putchar('\n');
	return (0);
}
