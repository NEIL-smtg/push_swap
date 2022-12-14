/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suchua < suchua@student.42kl.edu.my>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 00:49:08 by suchua            #+#    #+#             */
/*   Updated: 2022/12/04 00:34:27 by suchua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_stack **a, int print)
{
	t_stack	*head;

	stack_add_back(a, ft_newstack((*a)->data, (*a)->t_data));
	head = (*a)->next;
	free(*a);
	*a = NULL;
	*a = head;
	if (print)
		ft_putendl_fd("ra", 1);
}

void	rb(t_stack **b, int print)
{
	t_stack	*head;

	stack_add_back(b, ft_newstack((*b)->data, (*b)->t_data));
	head = (*b)->next;
	free(*b);
	*b = NULL;
	*b = head;
	if (print)
		ft_putendl_fd("rb", 1);
}

void	rr(t_stack **a, t_stack **b, int print)
{
	ra(a, 0);
	rb(b, 0);
	if (print)
		ft_putendl_fd("rr", 1);
}
