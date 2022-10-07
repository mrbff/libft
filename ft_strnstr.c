/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabaffo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 15:19:18 by mabaffo           #+#    #+#             */
/*   Updated: 2022/10/06 15:35:46 by mabaffo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strnstr(const char *big, const char *little, size_t len)
{
        int     i;
        int     j;

        i = 0;
        j = 0;
        if (little[j] == '\0')
                return (big);
        while (big[i] != '\0' && i < len)
        {
		while (big[i + j] == little[j] && big[i + j] != '\0' && i + j < len)
                {
                        j++;
                        if (little[j] == '\0')
                                return (&big[i]);
                }
                i++;
                j = 0;
        }
        return (0);
}
