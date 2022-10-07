/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabaffo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 13:34:30 by mabaffo           #+#    #+#             */
/*   Updated: 2022/10/07 15:56:49 by mabaffo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	bytes;
	void	*ptr;

	bytes = nmemb * size;
	if (bytes == 0)
		bytes++;
	ptr = malloc(bytes);
	if (ptr == NULL)
		return (NULL);
	else
		ft_bzero(ptr, bytes);
	return (ptr);
}
