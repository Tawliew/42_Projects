#include <stdio.h>
#include <string.h>

void *ft_memset(void *s, int c, size_t n)
{
	char *test;
	test = s;
	while (n > 0)
	{
		test[n-1] = c;
		n--;
	}
	return (s);
}

int main()
{
	char test[11] = "ronaldinho";
	char test1[11] = "ronaldinho";
	printf("string: %s\n", test);
	memset(test,'!',13);
	printf("memset: %s\n", test);
	ft_memset(test1,'!',13);
	printf("ft_memset: %s\n", test1);
}
