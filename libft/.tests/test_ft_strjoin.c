/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strjoin.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luizfern <lfluiz.lf@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/21 14:43:01 by luizfern          #+#    #+#             */
/*   Updated: 2021/06/21 15:09:02 by luizfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *strconc;
	int a;
	int b;
	int c;

	a = 0;
	b = 0;
	c = 0;
	strconc = (char *)malloc(sizeof(s1) * sizeof(s2) + 1);
	if (strconc == NULL)
		return (NULL);
	while ((unsigned char)s1[a])
	{
		strconc[a] = (unsigned char)s1[b];
		a++;
		b++;
	}
	while ((unsigned char)s2[c])
	{
		strconc[a] = (unsigned char)s2[c];
		a++;
		c++;
	}
	strconc[a] = '\0';
	return (strconc);
}

int main ()
{
	printf("string concatenada %s", ft_strjoin("ola ", "mundo"));
}
