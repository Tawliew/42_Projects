#include <stdio.h>
#include <ctype.h>
#include "../ft_tolower.c"

int main ()
{
	char teste;
	printf("*********************************\n");
	printf("@@@@@@@@@@@ FT_TOLOWER @@@@@@@@@@\n");
	teste = ft_tolower('A');
	printf("<ft_tolower.c> var=A, res=%c", teste);
	printf("\n");
	teste = tolower('A');
	printf("<tolower.c> var=A, res=%c", teste);
	printf("\n");
	printf("---------------------------------\n");
	teste = ft_tolower('B');
	printf("<ft_tolower.c> var=B, res=%c", teste);
	printf("\n");
	teste = tolower('B');
	printf("<tolower.c> var=B, res=%c", teste);
	printf("\n");
	printf("---------------------------------\n");
	teste = ft_tolower('c');
	printf("<ft_tolower.c> var=c, res=%c", teste);
	printf("\n");
	teste = tolower('c');
	printf("<tolower.c> var=c, res=%c", teste);
	printf("\n");
	printf("*********************************\n");
}
