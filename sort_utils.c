/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sokur <sokur@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 17:29:07 by melihyil          #+#    #+#             */
/*   Updated: 2023/09/11 13:56:35 by sokur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sorted(t_stack **stack, char c, int len)
{
	int		i;
	t_stack	*first;

	first = *stack;
	i = 1;
	if (c == 'a')
	{
		while (i++ < len)
		{
			if (first->d > first->n->d)
				return (0);
			first = first->n;
		}
	}
	first = *stack;
	if (c == 'b')
	{
		while (i++ < len)
		{
			if (first->d < first->n->d)
				return (0);
			first = first->n;
		}
	}
	return (1);
}

int	highvalue(t_stack **stack)
{
	int	tmp;

	tmp = (*stack)-> d;
	if ((*stack)-> n-> d > tmp)
		tmp = (*stack)-> n-> d;
	else if ((*stack)-> n-> n-> d > tmp)
		tmp = (*stack)-> n-> n-> d;
	return (tmp);
}

void	ft_mid_stack(t_stack **stack)
{
	int	tmp;

	tmp = highvalue(stack);
	if ((*stack)-> d == tmp)
		do_ra(stack);
	else if ((*stack)-> n-> d == tmp)
		do_rra(stack);
	if ((*stack)-> d > (*stack)->n-> d)
		do_sa(stack);
}

void	ft_sort_plan(t_stack **stack_a, t_stack **stack_b)
{
	int	len;

	if ((ft_stack_size((*stack_a))) == 2)
		do_ra(stack_a);
	else if ((ft_stack_size((*stack_a))) == 3)
		ft_mid_stack(stack_a);
	else
	{
		len = ft_stack_size(*stack_a);
		ft_quicksort_a(stack_a, stack_b, len, 0);
	}
}

void	ft_sort_int_tmp(int *tmp_stack, int size)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (tmp_stack[i] > tmp_stack[j])
			{
				tmp = tmp_stack[i];
				tmp_stack[i] = tmp_stack[j];
				tmp_stack[j] = tmp;
			}
			j++;
		}
		i++;
	}
}
