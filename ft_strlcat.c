/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabaffo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 11:44:32 by mabaffo           #+#    #+#             */
/*   Updated: 2022/10/07 16:45:34 by mabaffo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	s;

	i = 0;
	s = ft_strlen(dest);
	j = s;
	if (size == 0)
		return (ft_strlen(src));
	if (size < ft_strlen(dest))
		return (size + ft_strlen(src));
	while (src[i] && j < size)
	{
		dest[j] = src[i];
		j++;
		i++;
	}
	dest[j] = '\0';
	return (s + ft_strlen(src) + 1);
}
