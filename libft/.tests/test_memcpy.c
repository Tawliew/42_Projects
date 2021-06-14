#include <stdio.h>
#include <string.h>

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

int main () {
   const char src[50] = "http://www.tutorialspoint.com";
   char dest[50];
   printf("Before memcpy dest = %s\n", dest);
   ft_memcpy(dest, src, 50);
   printf("After memcpy dest = %s\n", dest);
}
