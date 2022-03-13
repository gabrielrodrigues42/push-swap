/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gandrade <gandrade@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 15:37:18 by gandrade          #+#    #+#             */
/*   Updated: 2022/03/13 15:40:35 by gandrade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three(t_stacks *stack)
{
	int	first;
	int	second;
	int	third;

	first = stack->a->data;
	second = stack->a->next->data;
	third = stack->a->next->next->data;
	if (first < second && second > third && first < third)
	{
		swap(stack, 'a');
		rotate(stack, 'a');
	}
	else if (first > second && second < third && first < third)
		swap(stack, 'a');
	else if (first < second && second > third && first > third)
		reverse_rotate(stack, 'a');
	else if (first > second && second < third && first > third)
		rotate(stack, 'a');
	else
	{
		swap(stack, 'a');
		reverse_rotate(stack, 'a');
	}
}
