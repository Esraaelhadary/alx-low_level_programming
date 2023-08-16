#include <stdio.h>
/**
*main - the entry point
*Description : prints the alphabet, in lowercase
*Return : 0 (Success)
*/
void print_alphabet(void) //Function definition
{
char alphabet = 'a';
while (alphabet >= 'z')
{
putchar(alphabet);
alphabet++;
}
putchar('\n');
}
int main(void)
{
print_alphabet();
return (0);
}
