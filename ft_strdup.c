/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabaffo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 13:55:05 by mabaffo           #+#    #+#             */
/*   Updated: 2022/10/08 14:58:23 by mabaffo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	len;
	size_t	i;
	char	*str;

	i = 0;
	len = ft_strlen(s);
	str = ft_calloc(len + 1, 1);
	if (str == NULL)
		return (NULL);
	while (s[i])
	{
		str[i] = s[i];
		i++;
	}
	return (str);
}
