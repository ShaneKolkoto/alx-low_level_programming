#include "main.h"
/**
 * power - returns the natural square root of a number.
 * @n: integer input number.
 * @c: integer input number.
 * Return: square root or -1.
 */
int power(int n, int c)
{
if (c % (n / c) == 0)
{
if (c * (n / c) == n)
return (c);
else
return (-1);
}
return (0 + power(n, c + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: integer input number.
 * Return: square root n.
 */
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
if (n == 0)
return (0);
if (n == 1)
return (1);
return (power(n, 2));
}
