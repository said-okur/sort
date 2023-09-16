/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sokur <sokur@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 19:54:47 by sokur             #+#    #+#             */
/*   Updated: 2023/07/11 12:45:06 by sokur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*buffer1;
	unsigned char	*buffer2;
	size_t			counter;

	if (!dst && !src)
		return (NULL);
	buffer1 = (unsigned char *)dst;
	buffer2 = (unsigned char *)src;
	counter = 0;
	if (buffer1 > buffer2)
	{
		while (len-- > 0)
			buffer1[len] = buffer2[len];
	}
	else
	{
		while (len > counter)
		{
			buffer1[counter] = buffer2[counter];
			counter++;
		}
	}
	return (dst);
}
