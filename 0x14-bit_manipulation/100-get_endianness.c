#define LITTLE_ENDIAN 1
#define BIG_ENDIAN 0

/**
 * get_endianness - function that checks the endianness by determing whether
 *                 it fit is big-endian (MSB) or little-endian (LSB)
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	int test_number;
	char *ptr;

	test_number = 1;
	ptr = (char *)&test_number;
	return (ptr[0] ? LITTLE_ENDIAN : BIG_ENDIAN);
}
