#include <stdio.h>
/**
 * main - entry point
 * Description: prints the alphabet in lowercase & uppercase
 * Return: 0 (Success)
 */
int main(void)
{
char letter = 'a';
char capital = 'A';
while (letter <= 'z')
{
putchar(letter);
letter++;
}
while (capital <= 'Z')
{
putchar(capital);
capital++;
}
putchar('\n');
return (0);
}
