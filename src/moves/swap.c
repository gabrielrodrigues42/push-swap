/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gandrade <gandrade@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 15:39:38 by gandrade          #+#    #+#             */
/*   Updated: 2022/02/11 21:55:38 by gandrade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	swap_move(t_lst2c **head)
{
	t_lst2c	*temp;

	if (!*head || *head == (*head)->next)
		return (0);
	temp = ft_lst2c_pop_node(head, (*head)->next);
	ft_lst2c_add_front(head, temp);
	return (1);
}

void	swap(t_stacks *stack, char name)
{
	if (name == 'a')
	{
		if (swap_move(&stack->a))
			ft_putendl_fd("sa", 1);
	}
	else if (name == 'b')
	{
		if (swap_move(&stack->b))
			ft_putendl_fd("sb", 1);
	}
	else
	{
		if (swap_move(&stack->a) && swap_move(&stack->b))
			ft_putendl_fd("ss", 1);
	}
}
