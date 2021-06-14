#include <stdio.h>
#include <string.h>

void ft_bzero(void *s, size_t n)
{
	char *test;
	test = s;
	while (n > 0)
	{
		test[n-1] = '\0';
		n--;
	}
}

int main()
{
	char test[11] = "ronaldinho";
	char test1[11] = "ronaldinho";
	printf("string: %s\n", test);
	bzero(test, 2);
	printf("bzero: %s\n", test);
	ft_bzero(test1, 2);
	printf("ft_bzero: %s\n", test1);
}
