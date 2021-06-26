/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luizfern <lfluiz.lf@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 18:50:19 by luizfern          #+#    #+#             */
/*   Updated: 2021/06/26 19:00:58 by luizfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t		i;
	const char	*source;
	char		*destiny;

	i = 0;
	source = src;
	destiny = dest;
	if (!dest && !src)
		return (NULL);
	if (destiny > source)
	{
		while (n > 0)
		{
			destiny[n - 1] = source[n - 1];
			n--;
		}
	}
	while (i < n)
	{
		destiny[i] = source[i];
		i++;
	}
	return (destiny);
}
