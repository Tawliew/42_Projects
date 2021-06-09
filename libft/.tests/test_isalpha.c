#include <stdio.h>
#include <ctype.h>
#include "../ft_isalpha.c"

int main ()
{
	int teste;
	printf("*********************************\n");
	printf("@@@@@@@@@@@ FT_ALPHA @@@@@@@@@@\n");
	teste = ft_isalpha('A');
	printf("<ft_isalpha.c> var=A, res=%d", teste);
	printf("\n");
	teste = isalpha('A');
	printf("<isalpha.c> var=A, res=%d", teste);
	printf("\n");
	printf("---------------------------------\n");
	teste = ft_isalpha('B');
	printf("<ft_isalpha.c> var=B, res=%d", teste);
	printf("\n");
	teste = isalpha('B');
	printf("<isalpha.c> var=B, res=%d", teste);
	printf("\n");
	printf("---------------------------------\n");
	teste = ft_isalpha('1');
	printf("<ft_isalpha.c> var=c, res=%d", teste);
	printf("\n");
	teste = isalpha('1');
	printf("<isalpha.c> var=c, res=%d", teste);
	printf("\n");
	printf("*********************************\n");
}
