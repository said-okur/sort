/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sokur <sokur@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 13:45:27 by sokur             #+#    #+#             */
/*   Updated: 2023/07/09 15:42:07 by sokur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	counter;

	counter = 0;
	while (s[counter])
	{
		if (s[counter] == (unsigned char)c)
			return (&((char *)s)[counter]);
		counter++;
	}
	if ((unsigned char)c == s[counter])
		return (&((char *)s)[counter]);
	return (NULL);
}
