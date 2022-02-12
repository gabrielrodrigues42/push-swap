/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gandrade <gandrade@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 15:47:25 by gandrade          #+#    #+#             */
/*   Updated: 2022/02/11 22:18:20 by gandrade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	rotate_move(t_lst2c **head)
{
	if (!*head || *head == (*head)->next)
		return ;
	*head = (*head)->next;
}

void	rotate(t_stacks *stack, char name)
{
	if (name == 'a')
	{
		rotate_move(&stack->a);
		ft_putendl_fd("ra", 1);
	}
	if (name == 'b')
	{
		rotate_move(&stack->b);
		ft_putendl_fd("rb", 1);
	}
	if (name == 'r')
	{
		rotate_move(&stack->a);
		rotate_move(&stack->b);
		ft_putendl_fd("rr", 1);
	}
}
