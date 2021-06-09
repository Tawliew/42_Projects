#include "../libft.h"
#include <stdio.h>
int main()
{
	char test;
	test = 12;
	printf("%d\n",ft_isprint(test));
	test = 31;
	printf("%d\n",ft_isprint(test));
	test = 67;
	printf("%d\n",ft_isprint(test));
	test = 89;
	printf("%d\n",ft_isprint(test));
	test = 127;
	printf("%d\n",ft_isprint(test));
}
