#include <stdio.h>
#include <ctype.h>
/**
 * main - prints the alphabets in lower case,eclude e & q
 *
 * Return: O, if succesful
 */
int main(void)
{
char alc;

for (alc = 'a' ; alc <= 'z' ; alc++)
{
if (alc != 'e' && alc != 'q')
putchar(alc);
}
putchar('\n');
return (0);
}
