/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thibaultgiraudon <thibaultgiraudon@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 11:09:59 by tgiraudo          #+#    #+#             */
/*   Updated: 2023/02/24 18:14:45 by thibaultgir      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	len_dest;

	if ((!src || !dst) && !dstsize)
		return (0);
	i = 0;
	j = 0;
	len_dest = ft_strlen(dst);
	if (dstsize == 0)
		return (ft_strlen(src));
	while (dst[i] != '\0' && i < dstsize)
		i++;
	while (src[j] != '\0' && i < dstsize -1)
		dst[i++] = src[j++];
	if (dstsize != 0 && dstsize >= len_dest)
		dst[i] = '\0';
	if (dstsize < len_dest)
		return (ft_strlen(src) + dstsize);
	else
		return (ft_strlen(src) + len_dest);
}
