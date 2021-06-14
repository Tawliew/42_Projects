#include <stdio.h>
#include <string.h>

void *ft_memmove(void *dest, const void *src, size_t n)
{
   size_t i;
   const char *source;
   char *destiny;

   i = 0;
   source = src;
   destiny = dest;

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

int main () {
   const char src[20] = "ronaldinho10";
   //char test_pointer = src;
   char dest[20] = "teste amigo nois";
   printf("Before memmove dest = %s\n", dest);
   ft_memmove(dest, src, 10);
   printf("After memmove dest = %s\n", dest);
}
