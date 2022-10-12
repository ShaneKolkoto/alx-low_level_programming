#include "3-calc.h"

/**
 * main - check the code for Holberton School students.
 *
 * @argc: argument's number
 * @argv: argument's array
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int (*func)(int, int), result, num1, num2;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	if ((*argv[2] == '/' || *argv[2] == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	if (strlen(argv[2]) > 1)
	{
		printf("Error\n");
		exit(99);
	}
	switch (*argv[2])
	{
		case '+':
		case '-':
		case '/':
		case '*':
		case '%':
		break;
		default:
			printf("Error\n");
			exit(99);
		break;
	}
	func = get_op_func(argv[2]);
	result = func(num1, num2);
	printf("%d\n", result);
	return (0);
}
