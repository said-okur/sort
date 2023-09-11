/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sokur <sokur@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 17:29:34 by sokur             #+#    #+#             */
/*   Updated: 2023/09/11 13:54:58 by sokur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <unistd.h>
#include <stdlib.h>

int	ft_sort_small_b(t_stack **a, t_stack **b, int len)
{
	if (len == 1)
	{
		do_pa(a, b);
	}
	else if (len == 2)
	{
		if ((*b)->d < (*b)->n->d)
			do_sb(b);
		while (len--)
			do_pa(a, b);
	}
	else if (len == 3)
	{
		while (len || !((*a)->d < (*a)->n->d && (*a)->n->d < (*a)->n->n->d))
		{
			if (len == 1 && (*a)->d > (*a)->n->d)
				do_sa(a);
			else if (len == 1 || (len >= 2 && (*b)->d > (*b)->n->d)
				|| (len == 3 && (*b)->d > (*b)->n->n->d))
				len = ft_push_sw(a, b, len, 1);
			else
				do_sb(b);
		}
	}
	return (0);
}

void	ft_quicksort_3a(t_stack **a, t_stack **b, int len)
{
	if (len == 3 && ft_stack_size(*a) == 3)
		ft_mid_stack(a);
	else if (len == 2)
	{
		if ((*a)->d > (*a)->n->d)
			do_sa(a);
	}
	else if (len == 3)
	{
		while (len != 3 || !((*a)->d < (*a)->n->d
				&& (*a)->n->d < (*a)->n->n->d))
		{
			if (len == 3 && (*a)->d > (*a)->n->d && (*a)->n->n->d)
				do_sa(a);
			else if (len == 3 && !((*a)->n->n->d > (*a)->d
					&& (*a)->n->n->d > (*a)->n->d))
				len = ft_push_sw(a, b, len, 0);
			else if ((*a)->d > (*a)->n->d)
				do_sa(a);
			else if (len++)
				do_pa(a, b);
		}
	}
}

int	ft_get_middle(int *pivot, t_stack **stack_a, int size)
{
	int		i;
	int		*tmp;
	t_stack	*a;

	tmp = (int *)malloc(sizeof(int) * size);
	if (!tmp)
		return (0);
	i = 0;
	a = *stack_a;
	while (i < size)
	{
		tmp[i] = a->d;
		a = a->n;
		i++;
	}
	ft_sort_int_tmp(tmp, size);
	*pivot = tmp[size / 2];
	free(tmp);
	return (1);
}

int	ft_quicksort_a(t_stack **a, t_stack **b, int len, int count)
{
	int	pivot;
	int	items;

	if (is_sorted(a, 'a', len) == 1)
		return (1);
	items = len;
	if (len <= 3)
	{
		ft_quicksort_3a(a, b, len);
		return (1);
	}
	if (!ft_get_middle(&pivot, a, len))
		return (0);
	while (len != items / 2 + items % 2)
	{
		if ((*a)->d < pivot && (len--))
			do_pb(b, a);
		else if (++count)
			do_ra(a);
	}
	while (items / 2 + items % 2 != ft_stack_size(*a) && count--)
		do_rra(a);
	return (ft_quicksort_a(a, b, items / 2 + items % 2, 0)
		&& ft_quicksort_b(a, b, items / 2, 0));
	return (1);
}

int	ft_quicksort_b(t_stack **a, t_stack **b, int len, int count)
{
	int	pivot;
	int	items;

	if (!count && is_sorted(b, 'b', len) == 1)
		while (len--)
			do_pa(a, b);
	if (len <= 3)
	{
		ft_sort_small_b(a, b, len);
		return (1);
	}
	items = len;
	if (!ft_get_middle(&pivot, b, len))
		return (0);
	while (len != items / 2)
	{
		if ((*b)->d >= pivot && len--)
			do_pa(a, b);
		else if (++count)
			do_rb(b);
	}
	while (items / 2 != ft_stack_size(*b) && count--)
		do_rrb(b);
	return (ft_quicksort_a(a, b, items / 2 + items % 2, 0)
		&& ft_quicksort_b(a, b, items / 2, 0));
}
