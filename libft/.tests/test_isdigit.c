#include <stdio.h>
#include <ctype.h>
#include "../ft_isdigit.c"

int main ()
{
	int teste;
	printf("*********************************\n");
	printf("@@@@@@@@@@@ FT_ISDIGIT @@@@@@@@@@\n");
	teste = ft_isdigit('A');
	printf("<ft_isdigit.c> var=A, res=%d", teste);
	printf("\n");
	teste = isdigit('A');
	printf("<isdigit.c> var=A, res=%d", teste);
	printf("\n");
	printf("---------------------------------\n");
	teste = ft_isdigit('B');
	printf("<ft_isdigit.c> var=B, res=%d", teste);
	printf("\n");
	teste = isdigit('B');
	printf("<isdigit.c> var=B, res=%d", teste);
	printf("\n");
	printf("---------------------------------\n");
	teste = ft_isdigit('1');
	printf("<ft_isdigit.c> var=c, res=%d", teste);
	printf("\n");
	teste = isdigit('1');
	printf("<isdigit.c> var=c, res=%d", teste);
	printf("\n");
	printf("*********************************\n");
}

