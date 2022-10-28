#include "main.h"

/**
 * flip_bits - Counts the number of bits needed to be
 *	flipped to get from one number to another.
 * @n: number.
 * @m: number to flip n to.
 *
 * Return: The necessary number of bits to flip
 *		to get from n to m.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m;
	unsigned long int bits = 0;

	while (xor > 0)
	{
		bits = bits + (xor & 1);
		xor = xor >> 1;
	}

	return (bits);
}
