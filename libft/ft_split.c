/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luizfern <lfluiz.lf@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 17:41:03 by luizfern          #+#    #+#             */
/*   Updated: 2021/06/26 19:14:31 by luizfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_counter_words(char *str, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i] && ft_strchr(str + i, c) != NULL)
	{
		if (i > 1 && str[i] == c && str[i + 1] != c)
			j++;
		i++;
	}
	j += 1;
	return (j);
}

static void	ft_build_words(int n_words, char **arr, char *str, char c)
{
	int	i;

	i = 0;
	while (i <= n_words - 1)
	{
		if (i != n_words - 1)
		{
			arr[i] = ft_substr(str, 0, ft_strchr(str, c) - str);
			str = ft_strchr(str, c);
			while (*str == c)
				str++;
		}
		else if (*str != '\0')
			arr[i] = ft_strdup(str);
		i++;
	}
	if (*str == '\0' && n_words == 1)
		arr[n_words - 1] = NULL;
	else
		arr[n_words] = NULL;
}

char	**ft_split(char const *s, char c)
{
	char	*scpy;
	char	*pointer_to_scpy;
	int		n_words;
	char	**splited;

	if (!s)
		return (NULL);
	scpy = ft_strtrim(s, &c);
	if (!scpy)
		return (NULL);
	pointer_to_scpy = scpy;
	n_words = ft_counter_words(scpy, c);
	splited = (char **)ft_calloc(sizeof(char *), (n_words + 1));
	if (!splited)
		return (NULL);
	ft_build_words(n_words, splited, scpy, c);
	free(pointer_to_scpy);
	return (splited);
}
