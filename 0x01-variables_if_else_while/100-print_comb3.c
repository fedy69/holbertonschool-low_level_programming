#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
int i;
int j;
for (i = 48; i <= 56; i++)
{
for (j = 49; j <= 57; j++)
{
if (i < j)
{
putchar(i);
putchar (j);
if ((i == 56) && (j == 57))
{
putchar('\n');
}
else
{
putchar (',');
putchar (' ');
}
}
}
}
return (0);
}
