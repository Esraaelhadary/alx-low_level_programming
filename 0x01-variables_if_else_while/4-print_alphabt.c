#include <stdio.h>
/**
 * main - entry point
 * Description: prints the alphabet in lowercas except q and e
 * Return: 0 (Success)
 */
int main(void)
{
char letter = 'a';
while (letter <= 'z')
{
putchar(letter);
letter++;
putchar(letter != q || letter != e);
}
putchar('\n');
return (0);
}
