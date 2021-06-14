#include "libft.h"

void ft_bzero(void *s, size_t n)
{
	char *zero;
	zero = s;

	while (n > 0)
	{
		zero[n - 1] = '\0';
		n--;
	}
}
