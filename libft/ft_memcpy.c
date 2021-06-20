#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
   const char *source;
   char *destiny;
   source = src;
   destiny = dest;
   if (dest == NULL && src == NULL)
	   return(0);

        while (n > 0)
        {
                destiny[n-1] = source[n-1];
                n--;
        }
        return (dest);
}
