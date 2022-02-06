/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clean_exit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gandrade <gandrade@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 13:16:53 by gandrade          #+#    #+#             */
/*   Updated: 2022/02/06 13:28:09 by gandrade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	clear_exit(t_stacks *stack, int code)
{
	if (stack->a)
		ft_lst2c_clear(&stack->a);
	if (stack->b)
		ft_lst2c_clear(&stack->b);
	exit(code);
}
