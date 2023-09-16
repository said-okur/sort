/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sokur <sokur@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 17:54:18 by sokur             #+#    #+#             */
/*   Updated: 2023/09/16 18:32:39 by sokur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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

int	ft_push_sw(t_stack **a, t_stack **b, int len, int operation)
{
	if (operation == 0)
		do_pb(b, a, 1);
	else
		do_pa(a, b, 1);
	len--;
	return (len);
}

static void	ft_swap(t_stack **stack)
{
	t_stack	*first;
	t_stack	*second;

	if (*stack == NULL || (*stack)->n == NULL)
		return ;
	first = (*stack);
	second = (*stack)->n;
	first -> n = (second)->n;
	second -> n = first;
	(*stack) = second;
}

void	do_sa(t_stack **stack_a, int flag)
{
	ft_swap(stack_a);
	if (flag == 1)
		write(1, "sa\n", 3);
}

void	do_sb(t_stack **stack_b, int flag)
{
	ft_swap(stack_b);
	if (flag == 1)
		write(1, "sb\n", 3);
}
