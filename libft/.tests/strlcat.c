#include <stdio.h>
#include <string.h>
#include <bsd/string.h>

size_t	ft_strlen(const char *s);
size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t a;
	size_t b;

	a = 0;
	b = ft_strlen(src);

	while (size > 0 && *dest)
	{
		a++;
		size--;
		dest++;
	}
	while (*src && (size - 1) > 1)
	{
		*dest++ = *src++;
	}
	if (*src == '\0' || size == 1)
	{
		*dest = '\0';
	}
	a+=b;
	return (a);
}
int main ()
{
	size_t sizet_test;
	size_t sizet_test1;
	char test[11] = "ronaldinho";
	char dest[20];
	//char test1[10] = "ronaldinho";
	char dest1[20];
	sizet_test = strlcpy(dest, test, 10);
	sizet_test1 = ft_strlcpy(dest1, test, 10);

	printf("return of strlcpy: %s with return size_t %ld\n", dest, sizet_test);
	printf("return of ft_strlcpy: %s with return size_t %ld\n", dest1, sizet_test1);
}
