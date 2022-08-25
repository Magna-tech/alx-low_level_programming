#include "3-calc.h"

/**
 * get_op_func - gets the function that matches an operation
 * @s: the operation passed
 *
 * Return: the function that matches the operand passed
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;
}
