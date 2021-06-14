#include <stdio.h>
#include <string.h>
#include <bsd/string.h>
#include <unistd.h>
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
int main ()
{
//	size_t sizet_ofc;
//	size_t sizet_ofc1;

	size_t sizet_ft;
	size_t sizet_ft1;

//	char dest[50] = "b";
	char dest1[50] = "b";

	sizet_ft= ft_strlcat(dest1, "AAAAAAAAA", 0);
	printf("return of ft_strlcat: %s with return size_t %ld\n", dest1, sizet_ft);
	sizet_ft1 = ft_strlcat(dest1, "gaucho", 3);
	printf("return of ft_strlcat: %s with return size_t %ld\n", dest1, sizet_ft1);


//	sizet_ofc = strlcat(dest, "AAAAAAAAA", 0);
//	printf("return of strlcat:    %s with return size_t %ld\n", dest, sizet_ofc);
//	sizet_ofc1 = strlcat(dest, "gaucho", 3);
//	printf("return of strlcat:    %s with return size_t %ld\n", dest, sizet_ofc1);
}
