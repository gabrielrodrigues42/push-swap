/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gandrade <gandrade@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 15:39:38 by gandrade          #+#    #+#             */
/*   Updated: 2022/02/12 12:24:04 by gandrade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	swap_move(t_lst2c **head)
{
	if (!*head || *head == (*head)->next)
		return ;
	else if (*head == (*head)->next->next)
		*head = (*head)->next;
	else
		ft_lst2c_add_front(head, ft_lst2c_pop_node(head, (*head)->next));
}

void	swap(t_stacks *stack, char name)
{
	if (name == 'a')
	{
		swap_move(&stack->a);
		ft_putendl_fd("sa", 1);
	}
	if (name == 'b')
	{
		swap_move(&stack->b);
		ft_putendl_fd("sb", 1);
	}
	if (name == 's')
	{
		swap_move(&stack->a);
		swap_move(&stack->b);
		ft_putendl_fd("ss", 1);
	}
}
