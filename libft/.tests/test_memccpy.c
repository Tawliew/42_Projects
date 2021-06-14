#include <stdio.h>
#include <string.h>

void *ft_memccpy(void *dest, const void *src, int c, size_t n)
{
   int i;
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

int main () {
   const char src[50] = "ronaldinho gaucho r10";
   char dest[50] = "teste anarquista";
   printf("Before memccpy dest = %s\n", dest);
   ft_memccpy(dest, src, 'a', 50);
   printf("After memccpy dest = %s\n", dest);
}

