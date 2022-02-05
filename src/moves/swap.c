/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gandrade <gandrade@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 15:39:38 by gandrade          #+#    #+#             */
/*   Updated: 2022/02/05 15:51:11 by gandrade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	swap_move(t_lst2c **head)
{

}

void	swap(t_stacks *stack, char name)
{
	if (name == 'a')
	{
		swap_move(&stack->a);
		ft_putendl_fd("sa", 1);
	}
	else if (name == 'b')
	{
		swap_move(&stack->b);
		ft_putendl_fd("sb", 1);
	}
	else
	{
		swap_move(&stack->a);
		swap_move(&stack->b);
		ft_putendl_fd("ss", 1);
	}
}
