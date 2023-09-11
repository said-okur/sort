/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sokur <sokur@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 12:06:34 by sokur             #+#    #+#             */
/*   Updated: 2023/09/11 14:52:35 by sokur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	t_stack	*stack_a;
	t_stack	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	if (argc < 2)
		return (0);
	if (argc == 2)
	{
		argv = ft_only(argv[1]);
		if (!argv)
			return (1);
		ft_do_the_job(&stack_a, &stack_b, argv);
		free_all(argv);
	}
	else
	{
		argv = &argv[1];
		ft_do_the_job(&stack_a, &stack_b, argv);
	}
	free_stack(&stack_a);
	free_stack(&stack_b);
	return (0);
}
