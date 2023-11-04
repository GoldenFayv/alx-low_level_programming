#include <stdio.h>
/**
 * main - Prints the alphabet without q and e.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabets[] = "abcdefghijklmnopqrstuvwxyz";
	int x;

	for (x = 0; x < 26; x++)
	{
		if (alphabets[x] != 'e' && alphabets[x] != 'q')
		{
			putchar(alphabets[x]);
		}
	}
	putchar('\n');
	return (0);
}
