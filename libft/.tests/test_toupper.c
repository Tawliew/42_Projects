#include <stdlib.h>
#include <stdio.h>
#include "../ft_toupper.c"
int toupper(int c);

int main ()
{
	char *ronaldinho;
	char teste;
	printf("*********************************\n");
	printf("@@@@@@@@@@@ FT_TOUPPER @@@@@@@@@@\n");
	teste = ft_toupper('a');
	printf("<ft_toupper.c> var=A, res=%c", teste);
	printf("\n");
	ronaldinho = malloc(7);
	teste = toupper('a');
	printf("<toupper.c> var=A, res=%c", teste);
	printf("\n");
	printf("---------------------------------\n");
	teste = ft_toupper('b');
	printf("<ft_toupper.c> var=B, res=%c", teste);
	printf("\n");
	teste = toupper('b');
	printf("<toupper.c> var=B, res=%c", teste);
	printf("\n");
	printf("---------------------------------\n");
	teste = ft_toupper('C');
	printf("<ft_toupper.c> var=c, res=%c", teste);
	printf("\n");
	teste = toupper('C');
	printf("<toupper.c> var=c, res=%c", teste);
	printf("\n");
	printf("*********************************\n");
}
