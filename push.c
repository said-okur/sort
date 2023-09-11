/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sokur <sokur@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 18:12:35 by sokur             #+#    #+#             */
/*   Updated: 2023/09/11 12:46:52 by sokur            ###   ########.fr       */
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

void	do_pa(t_stack **stack_a, t_stack **stack_b)
{
	ft_push(stack_b, stack_a);
	write(1, "pa\n", 3);
}

void	do_pb(t_stack **stack_b, t_stack **stack_a)
{
	ft_push(stack_a, stack_b);
	write(1, "pb\n", 3);
}
