/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sokur <sokur@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 18:07:15 by sokur             #+#    #+#             */
/*   Updated: 2023/09/16 14:14:10 by sokur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*last_stack(t_stack *stack)
{
	if (stack == NULL)
		return (NULL);
	while (stack->n != NULL)
		stack = stack->n;
	return (stack);
}
