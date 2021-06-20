#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
   size_t i;
   const char *source;
   char *destiny;

   i = 0;
   source = src;
   destiny = dest;
   if (dest == NULL && src == NULL)
	   return(NULL);
   if (destiny > source)
   {
      while (n > 0)
      {
	 destiny[n-1] = source[n-1];
	 n--;
      }
   }
   else
   {
      while (i < n)
      {
	 destiny[i] = source[i];
	 i++;
      }
   }
   return(destiny);
}
