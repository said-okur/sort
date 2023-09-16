/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sokur <sokur@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 13:45:54 by sokur             #+#    #+#             */
/*   Updated: 2023/07/11 12:42:30 by sokur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	len;
	size_t	counter;

	counter = 0;
	len = ft_strlen(dest);
	if (size - 1 > len && size > 0)
	{
		while (src[counter] != '\0' && size - 1 > len + counter)
		{
			dest[counter + len] = src[counter];
			counter++;
		}
		dest[len + counter] = 0;
	}
	if (len >= size)
		len = size;
	return (len + ft_strlen(src));
}
