/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gandrade <gandrade@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 20:38:57 by gandrade          #+#    #+#             */
/*   Updated: 2022/02/11 22:05:26 by gandrade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	push_move(t_lst2c **head_x, t_lst2c **head_y)
{
	if (!*head_x)
		return ;
	ft_lst2c_add_front(head_y, ft_lst2c_pop_node(head_x, *head_x));
}

void	push(t_stacks *stack, char name)
{
	if (name == 'a')
	{
		push_move(&stack->b, &stack->a);
		ft_putendl_fd("pa", 1);
	}
	if (name == 'b')
	{
		push_move(&stack->a, &stack->b);
		ft_putendl_fd("pb", 1);
	}
}
