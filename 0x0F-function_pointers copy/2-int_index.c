/**
 * int_index - searches for an integer.
 *
 * @array: elements
 * @size: array numbers
 * @cmp: comparable function
 *
 * Return: return code
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int cLoop;

	if (size <= 0 || !array || !cmp)
		return (-1);

	for (cLoop = 0; cLoop < size; cLoop++)
	{
		if (cmp(array[cLoop]))
			return (cLoop);
	}

	return (-1);
}
