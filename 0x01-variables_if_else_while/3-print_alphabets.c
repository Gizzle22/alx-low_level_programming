#include <stdio.h>
#include <ctype.h>
/**
 * main - print lowercase followed by uppercase alphabets
 *
 * Return: 0, if succesful
 */
int main(void)
{
char lc, uc;

for (lc = 'a' ; lc <= 'z' ; lc++)
{
putchar(lc);
}
for (uc = 'a' ; uc <= 'z' ; uc++)
{
putchar(toupper(uc));
}
putchar('\n');
return (0);
}
