/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suchua <suchua@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 19:49:49 by suchua            #+#    #+#             */
/*   Updated: 2022/11/15 14:48:53 by suchua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../Libft/libft.h"
# define PRINT 1
# define TYPE_A 1
# define TYPE_B 2

typedef struct s_stack
{
	int				data;
	int				t_data;
	struct s_stack	*next;
}	t_stack;

//remove
void	print_stack(t_stack *a, t_stack *b);

//exit
void	exit_now(void);

//valid arguments
t_stack	*ft_check_valid(int ac, char **av);
int		ft_is_nb(char *s);
long	my_atoi(char *str, t_stack *s);
int		ft_is_sign(char c);
int		ft_is_nb(char *s);
void	exit_now(void);
int		check_range(long num);
int		check_dup(t_stack **a, int num);
int		good_str(char *s);
int		ft_isspace(char ch);
void	clear_and_exit(t_stack *s);

//normalized
void	normalize97(t_stack **a);

//stack
t_stack	*ft_newstack(int data, int t_data);
t_stack	*get_last_elem(t_stack *stack);
int		get_stack_size(t_stack *stack);
void	ft_clear_stack(t_stack **stack);
void	ft_sort(t_stack **a, t_stack **b);
void	stack_add_front(t_stack **s, t_stack *add);
void	stack_add_back(t_stack **s, t_stack *new);
t_stack	*get_mid_stk(t_stack *s);

//rules
void	sa(t_stack **a, int print);
void	sb(t_stack **b, int print);
void	ss(t_stack **a, t_stack **b, int print);
void	pa(t_stack **a, t_stack **b, int print);
void	pb(t_stack **a, t_stack **b, int print);
void	ra(t_stack **a, int print);
void	rb(t_stack **b, int print);
void	rr(t_stack **a, t_stack **b, int print);
void	rra(t_stack **a, int print);
void	rrb(t_stack **b, int print);
void	rrr(t_stack **a, t_stack **b, int print);

//sort
void	ft_sort(t_stack **a, t_stack **b);
int		check_sort(t_stack **s);

//sort3
void	ft_sort3(t_stack **s, int type);

//sort5
void	ft_sort5(t_stack **a, t_stack **b);

//sort 100-500
void	ft_sort_infinity(t_stack **a, t_stack **b);

#endif