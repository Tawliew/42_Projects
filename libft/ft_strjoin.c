/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luizfern <lfluiz.lf@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/21 14:43:01 by luizfern          #+#    #+#             */
/*   Updated: 2021/06/21 15:21:15 by luizfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*strconc;
	int		a;
	int		b;

	a = 0;
	b = 0;
	strconc = (char *)malloc(sizeof(s1) * sizeof(s2) + 1);
	if ((strconc == NULL) || (s1 == NULL || s2 == NULL))
		return (NULL);
	while ((unsigned char)s1[a])
	{
		strconc[a] = (unsigned char)s1[a];
		a++;
	}
	while ((unsigned char)s2[b])
	{
		strconc[a] = (unsigned char)s2[b];
		a++;
		b++;
	}
	strconc[a] = '\0';
	return (strconc);
}
