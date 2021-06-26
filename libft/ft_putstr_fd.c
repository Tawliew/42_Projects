/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luizfern <lfluiz.lf@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 17:52:05 by luizfern          #+#    #+#             */
/*   Updated: 2021/06/26 19:17:59 by luizfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	size_t	a;

	if (!s)
		return ;
	a = 0;
	while (a < ft_strlen(s))
	{
		write(fd, &s[a], 1);
		a++;
	}
}
