/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sokur <sokur@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 07:40:43 by sokur             #+#    #+#             */
/*   Updated: 2023/09/16 18:33:09 by sokur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	error(t_stack **a, t_stack **b, int flag)
{
	free_stack(a);
	free_stack(b);
	if (flag == 1)
	{
		write(2, "Error\n", 6);
		exit(1);
	}
}

void	checker(char *str, t_stack **a, t_stack **b)
{
	if (!ft_strncmp(str, "ra\n", 2))
		do_ra(a, 0);
	else if (!ft_strncmp(str, "sa\n", 2))
		do_sa(a, 0);
	else if (!ft_strncmp(str, "sb\n", 2))
		do_sb(b, 0);
	else if (!ft_strncmp(str, "pa\n", 2))
		do_pa(a, b, 0);
	else if (!ft_strncmp(str, "pb\n", 2))
		do_pb(b, a, 0);
	else if (!ft_strncmp(str, "rb\n", 2))
		do_rb(b, 0);
	else if (!ft_strncmp(str, "rra\n", 3))
		do_rra(a, 0);
	else if (!ft_strncmp(str, "rrb\n", 3))
		do_rrb(b, 0);
	else
		error(a, b, 1);
}

void	print(t_stack **a, t_stack **b)
{
	if (is_sorted(a, 'a', ft_stack_size(*a)) && !*b)
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
}

int	main(int argc, char *argv[])
{
	t_stack	*a;
	t_stack	*b;
	char	*str;
	char	**tmp;

	tmp = &argv[1];
	a = NULL;
	b = NULL;
	str = NULL;
	str = get_next_line(0, str);
	if (argc >= 2)
	{
		if (argc == 2)
			tmp = ft_only(argv[1]);
		a = allstack(tmp);
		while (str && ft_strlen(str) > 0)
		{
			checker(str, &a, &b);
			free(str);
			str = get_next_line(0, str);
		}
		free(str);
	}
	else
		return (0);
	free(str);
	print(&a, &b);
	error(&a, &b, 0);
	return (0);
}
