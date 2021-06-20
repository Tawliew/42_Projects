/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luizfern <lfluiz.lf@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/20 20:12:06 by luizfern          #+#    #+#             */
/*   Updated: 2021/06/20 20:19:18 by luizfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t i;
	const unsigned char *source;
	unsigned char *destiny;

	c = (unsigned char)c; 
	source = src;
	destiny = dest;
	i = 0;
	while (i < n)
	{
		destiny[i] = source[i];
		if (source[i] == c)
			return (destiny + i + 1);
		i++;
	}
	return (NULL);
}

