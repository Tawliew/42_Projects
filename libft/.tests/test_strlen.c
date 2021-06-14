#include <stdio.h>
#include <string.h>
size_t ft_strlen(const char *s)
{
	size_t i;

	i = 0;
	while(*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
int main ()
{
	char dest[20];
	printf("return of strlen: %ld\n", strlen(dest));
	printf("return of ft_strlen: %ld\n", ft_strlen(dest));
}
