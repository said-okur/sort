/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sokur <sokur@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 20:12:55 by sokur             #+#    #+#             */
/*   Updated: 2023/09/11 12:48:25 by sokur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	do_rrotate(t_stack **stack)
{
	t_stack	*temp;
	t_stack	*last;
	t_stack	*second_last;

	second_last = NULL;
	last = *stack;
	temp = *stack;
	if (*stack == NULL || (*stack)->n == NULL)
		return ;
	while (last->n != NULL)
	{
		second_last = last;
		last = last->n;
	}
	second_last->n = NULL;
	last->n = temp;
	(*stack) = last;
}

void	do_rra(t_stack **stack_a)
{
	do_rrotate(stack_a);
	write(1, "rra\n", 4);
}

void	do_rrb(t_stack **stack_b)
{
	do_rrotate(stack_b);
	write(1, "rrb\n", 4);
}

void	do_rrr(t_stack **stack_a, t_stack **stack_b)
{
	do_rrotate(stack_a);
	do_rrotate(stack_b);
	write(1, "rrr\n", 4);
}
