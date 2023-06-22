#include "main.h"

/**
 *_isdigit -: defines if a character is a number
 *@c: charater
 *Return:1 true 0 false
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
