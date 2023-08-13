#include <stdio.h>
/**
 * main - entry point
 * Description: prints all single digit numbers of base 10 starting from 0
 * Return: 0 (Success)
 */
int main(void)
{
int single = 0;
while (single <= 9)
{
putchar(single + '0');
single++;
}
putchar('\n');
return (0);
}
