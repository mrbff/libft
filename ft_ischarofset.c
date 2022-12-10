/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ischarofset.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabaffo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 17:50:37 by mabaffo           #+#    #+#             */
/*   Updated: 2022/12/09 17:54:42 by mabaffo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     ft_ischarofset(char *set, char c)
{
        size_t  i;

        i = 0;
        while (set[i])
        {
                if (set[i] == c)
                        return (1);
                i++;
        }
        return (0);
}
