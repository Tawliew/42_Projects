/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luizfern <lfluiz.lf@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 19:04:22 by luizfern          #+#    #+#             */
/*   Updated: 2021/06/26 19:06:23 by luizfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	const char	*source;
	char		*destiny;

	source = src;
	destiny = dest;
	if (!dest && !src)
		return (NULL);
	while (n > 0)
	{
		destiny[n - 1] = source[n - 1];
		n--;
	}
	return (dest);
}
