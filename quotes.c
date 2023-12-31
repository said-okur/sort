/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quotes.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sokur <sokur@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 14:36:27 by sokur             #+#    #+#             */
/*   Updated: 2023/09/16 14:14:37 by sokur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	**free_all(char **result)
{
	int	i;

	i = 0;
	while (result[i])
	{
		free(result[i]);
		i++;
	}
	free(result);
	return (NULL);
}

char	**ft_only(char *str)
{
	char	**ptr;

	ptr = ft_split(str, ' ');
	if (!ptr)
		return (NULL);
	return (ptr);
}
