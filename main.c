#include <stdio.h>
#include "ft_printf.h"

int main()
{
	int test = 42;

	printf("%p", &test);
	printf("\n");
	ft_printf("%p", &test);
	return (0);
}
