/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sokur <sokur@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 17:55:57 by sokur             #+#    #+#             */
/*   Updated: 2023/09/16 18:31:56 by sokur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include "libft/libft.h"

typedef struct t_stack
{
	int				d;
	struct t_stack	*n;
}	t_stack;

//rules
void		do_sa(t_stack **stack_a, int flag);
void		do_sb(t_stack **stack_b, int flag);
void		do_pa(t_stack **stack_a, t_stack **stack_b, int flag);
void		do_pb(t_stack **stack_b, t_stack **stack_a, int flag);
void		do_ra(t_stack **stack_a, int flag);
void		do_rb(t_stack **stack_b, int flag);
void		do_rra(t_stack **stack_a, int flag);
void		do_rrb(t_stack **stack_b, int flag);
//stack


void		ft_mid_stack(t_stack **stack);
void		ft_sort_plan(t_stack **stack_a, t_stack **stack_b);
//allprogram
void		ft_do_the_job(t_stack **stack_a, t_stack **stack_b, char **str);
char		**free_all(char **result);
//sort
int			ft_quicksort_a(t_stack **a, t_stack **b, int len, int count);
int			ft_quicksort_b(t_stack **a, t_stack **b, int len, int count);
void		ft_pivot_sort(int *tmp_stack, int size);
void		ft_quicksort_3a(t_stack **a, t_stack **b, int len);
int			ft_sort_small_b(t_stack **a, t_stack **b, int len);
int			ft_push_sw(t_stack **a, t_stack **b, int len, int operation);
int			is_sorted(t_stack **stack, char c, int len);

t_stack		*allstack(char **av);
t_stack		*last_stack(t_stack *a);

void		free_stack(t_stack **stack);

void		error_exit(t_stack **stack_a, t_stack **stack_b);
int			input_check(char **argv);

int			effort_required(t_stack *stack);
int			ft_stack_size(t_stack *stack);
char		**ft_only(char *str);
int			ft_repeatnum(char **argv);
#endif
