#include "libft.h"
void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t i;
	const char *source;
	char *destiny;

	source = src;
	destiny = dest;
	i = 0;

	while (i < n)
        {
		destiny[i] = source[i];
           	if (source[i] == c)
              		return (dest);
           	i++;
        }
        return (dest);
}

