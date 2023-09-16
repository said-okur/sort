/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sokur <sokur@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 16:06:41 by sokur             #+#    #+#             */
/*   Updated: 2023/09/16 18:28:08 by sokur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <unistd.h>
#include <stdlib.h>

static void	do_rotate(t_stack **stack)
{
	t_stack	*tmp;

	if (*stack == NULL || (*stack)->n == NULL)
		return ;
	tmp = *stack;
	*stack = (*stack)->n;
	last_stack(*stack)->n = tmp;
	tmp->n = NULL;
}

void	do_ra(t_stack **stack_a, int flag)
{
	do_rotate(stack_a);
	if (flag == 1)
		write(1, "ra\n", 3);
}

void	do_rb(t_stack **stack_b, int flag)
{
	do_rotate(stack_b);
	if (flag == 1)
		write(1, "rb\n", 3);
}
