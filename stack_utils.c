/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sokur <sokur@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 11:38:06 by sokur             #+#    #+#             */
/*   Updated: 2023/09/11 15:26:42 by sokur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static t_stack	*new_stack(int d)
{
	t_stack	*tmp_stack;

	tmp_stack = malloc(sizeof * tmp_stack);
	if (!tmp_stack)
		return (NULL);
	tmp_stack ->d = d;
	tmp_stack -> n = NULL;
	return (tmp_stack);
}

static int	add_stack(t_stack *stack, int d)
{
	stack = last_stack(stack);
	stack ->n = new_stack(d);
	if (!(stack ->n))
		return (0);
	return (1);
}
static void	ft_is_int(long nb, char **av, t_stack *stack)
{
	if (nb > 2147483647 || nb < -2147483648)
	{
		write(2, "Error\n", 6);
		free_stack(&stack);
		free_all(av);
		exit(1);
	}
}
t_stack	*allstack(char **av)
{
	t_stack	*stack;
	t_stack	*tmp;
	int		i;
	long	nb;

	i = 0;
	while (av[i])
	{
		nb = ft_atoi(av[i]);
		ft_is_int(nb, av, stack);
		if (i == 0)
		{
			stack = new_stack(nb);
			if (!stack)
				return (NULL);
			tmp = stack;
		}
		else if (!add_stack(tmp, nb))
			return (NULL);
		i++;
	}
	tmp = NULL;
	return (stack);
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

int	ft_stack_size(t_stack *stack)
{
	int	i;

	i = 0;
	while (stack-> n != NULL)
	{
		stack = stack ->n;
		i++;
	}
	return (i + 1);
}
