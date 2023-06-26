/**
 * swap_int - Swaps the values of two integers.
 * @a: pointer a
 * @b: pointer b;
 * Return: nothing .
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
