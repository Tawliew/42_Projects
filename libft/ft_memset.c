#include "libft.h"

void *ft_memset(void *s, int c, size_t n)
{
	char *func;
	func = s;
	while (n > 0)
	{
		func[n-1] = c;
		n--;
	}
	return(func);
}
