#include <stdio.h>
/**
 * main - entry point
 * Description: prints the alphabet in lowercase
 * Return: 0 (Success)
 */
int main(void)
{
char letter = 'a';
char capital = 'A';
while (letter <= 'z' $$ capital <= 'Z')
{
putchar(letter);
putchar(capital);
letter++;
capital++;
}
putchar('\n');
return (0);
}
