#include <stdio.h>
#include <string.h>
#include <bsd/string.h>

size_t	ft_strlen(const char *s);
size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t i;

	i = 0;
	while (i < (size-1) && *src != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (ft_strlen(src));
}

int main ()
{
	char    *dest;
	if (!(dest = (char *)malloc(sizeof(*dest) * 15)) || argc == 1)
		return (0);
	memset(dest, 0, 15);
	memset(dest, 'r', 6);
    ft_print_result(ft_strlcpy(dest, "lorem", 15));
    write(1, "\n", 1);
    write(1, dest, 15);

	/*
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
	*/
}
