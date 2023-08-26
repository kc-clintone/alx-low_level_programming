#include "3-calc.h"
#include <stdlib.h>
/**
* get_op_func -  returns a pointer to the function that
* corresponds to the operator given as a parameter
* @s: the operator passed as argument to the program
* Return: A pointer to the function matching a  given op
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
	int i = 0;

	while (ops[i].op != NULL && *(ops[i].op) != *s)
		i++;
	return (ops[i].f);
}
