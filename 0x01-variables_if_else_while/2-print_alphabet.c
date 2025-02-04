#include <stdio.h>
/**
 * main - main block
 * Description: Use `putchar` function to print the alphabet in lowercase.
 * Return: 0
 */
int main(void)
{
	char c = 'a';
	
	do {
		putchar(c);
		c++;
	} while (c <= 'z')
	putchar('\n');
	
	return (0);
}
