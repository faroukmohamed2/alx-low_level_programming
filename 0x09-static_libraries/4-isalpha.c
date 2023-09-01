#include "main.h"
int _isalpha(int c)
{
	char a;
	if (c >= 65 && c <= 72)
	{
		a = c;
		_putchar(a);
	}
	return (c);
}
