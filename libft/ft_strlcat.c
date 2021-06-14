#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	a;
	size_t	b;

	a = 0;
	b = 0;
	while (dest[a] && a < size)
		a++;
	while ((a + 1) < size && src[b])
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	if (a < size)
		dest[a] = '\0';
	while (src[b])
	{
		a++;
		b++;
	}
	return (a);
}
