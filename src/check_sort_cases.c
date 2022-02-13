/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_sort_cases.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gandrade <gandrade@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 13:23:42 by gandrade          #+#    #+#             */
/*   Updated: 2022/02/12 23:07:21 by gandrade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	stack_is_sorted(t_lst2c *head);
static int	stack_is_rev_sorted(t_lst2c *head);
static void	sort_two(t_stacks *stack);

void	check_sort_cases(t_stacks *stack)
{
	int	size = ft_lst2c_size(stack->a);
	if (size == 1 || stack_is_sorted(stack->a))
		return ;
	else if (size == 2)
		sort_two(stack);
	else
		return ;
}

static int	stack_is_sorted(t_lst2c *head)
{
	t_lst2c	*temp;

	temp = head;
	while (temp->next != head)
	{
		if (temp->data < temp->next->data)
			temp = temp->next;
		else
			return (0);
	}
	return (1);
}

static int	stack_is_rev_sorted(t_lst2c *head)
{
	t_lst2c	*temp;

	temp = head;
	while (temp->next != head)
	{
		if (temp->data > temp->next->data)
			temp = temp->next;
		else
			return (0);
	}
	return (1);
}

static void	sort_two(t_stacks *stack)
{
	if (stack->a->data > stack->a->next->data)
		swap(stack, 'a');
}
