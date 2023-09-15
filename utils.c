/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sokur <sokur@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 18:07:15 by sokur             #+#    #+#             */
/*   Updated: 2023/09/11 19:28:18 by sokur            ###   ########.fr       */
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

long	ft_atoi(char *str)
{
	int		op;
	int		i;
	long	result;

	result = 0;
	op = 1;
	i = 0;
	while (str[i] <= 32)
		i++;
	if (str[i] == '-')
	{
		op = -1;
		i++;
	}
	if (str[i] == '+')
		i++;
	if (str[i] == '+' || str[i] == '-')
		return (0);
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = (result * 10) + (str[i] - '0');
		i++;
	}
	return (result * op);
}

int	effort_required(t_stack *stack)
{
	while (stack -> n)
	{
		if ((stack -> d) > (stack -> n -> d))
			return (1);
		stack = stack -> n;
	}
	return (0);
}
