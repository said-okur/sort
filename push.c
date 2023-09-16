/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sokur <sokur@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 18:12:35 by sokur             #+#    #+#             */
/*   Updated: 2023/09/16 18:28:41 by sokur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>
#include <unistd.h>

static void	ft_push(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*tmp;
	t_stack	*box;

	tmp = (*stack_a);
	(*stack_a) = (*stack_a)->n;
	box = (*stack_b);
	(*stack_b) = tmp;
	(*stack_b)-> n = box;
}

void	do_pa(t_stack **stack_a, t_stack **stack_b, int flag)
{
	ft_push(stack_b, stack_a);
	if (flag == 1)
		write(1, "pa\n", 3);
}

void	do_pb(t_stack **stack_b, t_stack **stack_a, int flag)
{
	ft_push(stack_a, stack_b);
	if (flag == 1)
		write(1, "pb\n", 3);
}
