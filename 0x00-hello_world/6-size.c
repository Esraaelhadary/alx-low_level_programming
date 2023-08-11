#include <stdio.h>
/**
 * main - the program that prints a line using sizeof function
 * Return: 0 (Success)
 */
int main(void)
{
char a;
int b;
long int c;
long long int d;
float f;
printf("Size of a char:%zu byte(s)\n", sizeof(a));
printf("size of an int:%zu byte(s)\n", sizeof(b));
printf("size of a long int:%zu byte(s)\n", sizeof(c));
printf("size of a long long int:%zu byte(s)\n", sizeof(d));
printf("size of a float:%zu byte(s)\n", sizeof(f));
return (0);
}
