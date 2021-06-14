#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
   const char *source;
   char *destiny;
   source = src;
   destiny = dest;

        while (n > 0)
        {
                destiny[n-1] = source[n-1];
                n--;
        }
        return (dest);
}
