/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gandrade <gandrade@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 15:47:25 by gandrade          #+#    #+#             */
/*   Updated: 2022/02/05 15:48:10 by gandrade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	rotate_move(t_lst2c **head)
{

}

void	rotate(t_stacks *stack, char name)
{
	if (name == 'a')
	{
		rotate_move(&stack->a);
		ft_putendl_fd("ra", 1);
	}
	else if (name == 'b')
	{
		rotate_move(&stack->b);
		ft_putendl_fd("rb", 1);
	}
	else
	{
		rotate_move(&stack->a);
		rotate_move(&stack->b);
		ft_putendl_fd("rr", 1);
	}
}
