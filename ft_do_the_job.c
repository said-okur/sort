/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_do_the_job.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sokur <sokur@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 15:16:47 by sokur             #+#    #+#             */
/*   Updated: 2023/09/11 15:24:50 by sokur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_do_the_job(t_stack **stack_a, t_stack **stack_b, char **argv)
{
	if (!input_check(argv))
		error_exit(NULL, NULL);
	(*stack_a) = allstack(argv);
	if (effort_required((*stack_a)))
		ft_sort_plan(stack_a, stack_b);
}
