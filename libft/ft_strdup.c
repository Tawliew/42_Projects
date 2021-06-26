/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luizfern <lfluiz.lf@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/20 18:15:05 by luizfern          #+#    #+#             */
/*   Updated: 2021/06/26 19:02:53 by luizfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

char	*ft_strdup(const char *src)
{
	char	*new_string_ptr;
	size_t	len;

	len = ft_strlen(src);
	new_string_ptr = malloc(len + 1);
	if (!new_string_ptr)
		return (0);
	ft_strlcpy(new_string_ptr, src, len + 1);
	new_string_ptr[len] = '\0';
	return (new_string_ptr);
}
