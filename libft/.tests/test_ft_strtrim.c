/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strtrim.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luizfern <lfluiz.lf@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/21 15:23:26 by luizfern          #+#    #+#             */
/*   Updated: 2021/06/21 17:13:14 by luizfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

char    *ft_strtrim(char const *s1, char const *set)
{
    char	*ptr;
    size_t	a;
    size_t	b;
    
    a = 0;
    b = 0;
    ptr = (char *)s1;
    ptr = (char *)malloc(ft_strlen(s1)+1);
    if (ptr == NULL || s1 == NULL || set == NULL)
        return (NULL);
    while((unsigned char)s1[a])
    {
        if((unsigned char)set[a] != (unsigned char)s1[a])
        {
            ptr[b] = (unsigned char)s1[a];
            b++;
        }
        a++;
    }
    while (b < ft_strlen(s1)+1)
    {
        ptr[b] = '\0';
        b++;
    }
    return(ptr);
}

int main ()
{
	char r10[11] = "ronaldinho";
	printf("%s\n", r10);
	printf("ft_strtrim: %s", ft_strtrim(r10, "rona"));
}
