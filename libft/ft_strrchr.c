/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luizfern <lfluiz.lf@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/20 18:20:46 by luizfern          #+#    #+#             */
/*   Updated: 2021/06/20 18:39:24 by luizfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*str;

	str = (char *) s;
	c = (unsigned char) c;
	i = ft_strlen(s);
	while (i && str[i] != c)
		i--;
	if (str[i] == c)
		return (&str[i]);
	else
		return (NULL);
}

