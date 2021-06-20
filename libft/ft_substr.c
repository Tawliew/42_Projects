/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luizfern <lfluiz.lf@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/20 19:00:40 by luizfern          #+#    #+#             */
/*   Updated: 2021/06/20 19:29:43 by luizfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	char	*substr;
	int		i;

	if (s == NULL)
		return (NULL);
	i = 0;
	str = (char *)s;
	substr = (char *)malloc(len + 1 * sizeof(*s));
	if (substr == NULL)
		return (NULL);
	while (start <= len)
	{
		substr[i] = str[start];
		i++;
		start++;
	}
	return (substr);
}
