/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luizfern <lfluiz.lf@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 18:00:02 by luizfern          #+#    #+#             */
/*   Updated: 2021/06/26 19:13:42 by luizfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	a;
	int	b;

	if (!s)
		return ;
	a = ft_strlen(s);
	b = 0;
	while (b < a)
	{
		write(fd, &s[b], 1);
		b++;
	}
	write(fd, "\n", 1);
}
