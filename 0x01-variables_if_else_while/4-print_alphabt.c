#include <stdio.h>
/**
 * main - entry point
 * Description: Print all the letters except q and e
 * Return: 0 (Success)
 */
int main(void)
{
char letter = 'a';
while (letter <= 'z')
{
if (letter == 'e' && letter == 'q')
letter++;
putchar(letter);
letter++;
}
putchar('\n');
return (0);
}
