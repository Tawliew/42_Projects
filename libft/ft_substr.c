/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luizfern <lfluiz.lf@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/20 19:00:40 by luizfern          #+#    #+#             */
/*   Updated: 2021/06/20 20:46:26 by luizfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	counter1;
	size_t	counter2;
	char	*substr;

	substr = (char *)malloc(sizeof(*s) * (len + 1));
	if (substr == NULL)
		return (NULL);
	if (s == NULL)
		return (NULL);
	counter1 = 0;
	counter2 = 0;
	while (s[counter1])
	{
		if (counter1 >= start && counter2 < len)
		{
			substr[counter2] = s[counter1];
			counter2++;
		}
		counter1++;
	}
	substr[counter2] = '\0';
	return (substr);
}
