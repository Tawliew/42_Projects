#include <stdio.h>
#include <string.h>

void *ft_memchr(const void *s, int c, size_t n)
{
   const char *str;
   size_t i;

   str = s;
   i = 0;

   while (i < n)
   {
      if(*str == c)
      {
	 return ((unsigned char *) str);
      }
      str++;
      i++;
   }
   return (NULL);
}

int main ()
{
   const char src[] = "ronaldinho10";
   char *dest;
   printf("Before memchr src = %s\n", src);
   dest = memchr(src, '0', 0);
   printf("After memchr dest = %s\n", dest);
}
