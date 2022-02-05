/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gandrade <gandrade@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 20:38:57 by gandrade          #+#    #+#             */
/*   Updated: 2022/02/05 15:39:07 by gandrade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	push_move(t_lst2c **head_x, t_lst2c **head_y)
{
	
}

void	push(t_stacks *stack, char name)
{
	if (name == 'a')
	{
		push_move(&stack->b, &stack->a);
		ft_putendl_fd("pa", 1);
	}
	else
	{
		push_move(&stack->a, &stack->b);
		ft_putendl_fd("pb", 1);
	}
}
