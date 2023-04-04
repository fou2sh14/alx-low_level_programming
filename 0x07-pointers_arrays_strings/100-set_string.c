#include "main.h"

/**
 * set_string - function to set pointer to another pointer
 *
 * @s: pointer to another pointer
 *
 * @to: the other pointer
 */

void set_string(char **s, char *to)
{
	*s = to;
}
