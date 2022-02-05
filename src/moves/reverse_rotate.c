/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gandrade <gandrade@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 15:49:36 by gandrade          #+#    #+#             */
/*   Updated: 2022/02/05 15:50:03 by gandrade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	reverse_rotate_move(t_lst2c **head)
{

}

void	reverse_rotate(t_stacks *stack, char name)
{
	if (name == 'a')
	{
		reverse_rotate_move(&stack->a);
		ft_putendl_fd("rra", 1);
	}
	else if (name == 'b')
	{
		reverse_rotate_move(&stack->b);
		ft_putendl_fd("rrb", 1);
	}
	else
	{
		reverse_rotate_move(&stack->a);
		reverse_rotate_move(&stack->b);
		ft_putendl_fd("rrr", 1);
	}
}

