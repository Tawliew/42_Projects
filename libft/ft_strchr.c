/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luizfern <lfluiz.lf@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/20 18:20:46 by luizfern          #+#    #+#             */
/*   Updated: 2021/06/20 18:23:23 by luizfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*ptr_str;

	ptr_str =(char *)s;
	while (*ptr_str != c)
	{
		if (*ptr_str == '\0')
			return (NULL);
		ptr_str++;
	}
	return (ptr_str);
}
