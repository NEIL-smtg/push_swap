/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort5.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suchua < suchua@student.42kl.edu.my>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 16:01:41 by suchua            #+#    #+#             */
/*   Updated: 2022/11/18 16:01:41 by suchua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	start_from_bottom(t_stack **a, t_stack **b)
{
	int	n;

	n = 0;
	while ((get_last_elem(*a))->data > (*b)->data)
	{
		rra(a, PRINT);
		n++;
	}
	pa(a, b);
	n++;
	while (n--)
		ra(a, PRINT);
}

void	start_from_top(t_stack **a, t_stack **b)
{
	int	n;

	n = 0;
	while ((*a)->data < (*b)->data)
	{
		ra(a, PRINT);
		n++;
	}
	pa(a, b);
	while (n--)
		rra(a, PRINT);
}

void	ft_push_somewhere(t_stack **a, t_stack **b)
{
	if ((*b)->data > (get_mid_stk(*a))->data)
		start_from_bottom(a, b);
	else
		start_from_top(a, b);
}

void	ft_handle_bnext(t_stack **a, t_stack **b, t_stack *last)
{
	t_stack	*bnext;

	bnext = (*b)->next;
	if ((bnext->data < (*a)->data) || (bnext->data > last->data))
	{
		sb(b, PRINT);
		pa(a, b);
		if (bnext->data > last->data)
			ra(a, PRINT);
	}
}

void	ft_sort5(t_stack **a, t_stack **b)
{
	t_stack	*last;

	while (*b)
	{
		last = get_last_elem(*a);
		if ((*b)->data > last->data)
		{
			pa(a, b);
			ra(a, PRINT);
		}
		else if ((*b)->data < (*a)->data)
			pa(a, b);
		else if ((*b)->next)
			ft_handle_bnext(a, b, last);
		else
			ft_push_somewhere(a, b);
	}
}

// -INT_MIN 342 = -intmin 342 == 342 
// -1 632 -328 == -328 -1 632 == -min - 328 -1 632

// rra pa sa ra ra
// ra
// ra
// ra
// pa
// rra
// rra
// rra