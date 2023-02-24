/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thibaultgiraudon <thibaultgiraudon@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 17:22:40 by tgiraudo          #+#    #+#             */
/*   Updated: 2023/02/24 18:14:45 by thibaultgir      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	int		save;
	int		to_find_len;

	i = 0;
	j = 0;
	save = 0;
	to_find_len = ft_strlen(needle);
	if (!(to_find_len))
		return ((char *)(haystack));
	while (len > i && haystack[i])
	{
		i = save;
		while (haystack[i++] == needle[j++] && len >= i)
		{
			if (needle[j] == '\0')
				return ((char *)(haystack + save));
		}
		save++;
		j = 0;
	}
	return (NULL);
}
