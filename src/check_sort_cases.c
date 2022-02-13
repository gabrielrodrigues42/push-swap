/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_sort_cases.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gandrade <gandrade@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 13:23:42 by gandrade          #+#    #+#             */
/*   Updated: 2022/02/12 23:03:05 by gandrade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

static int	stack_is_sorted(t_lst2c *head);
static int	stack_is_rev_sorted(t_lst2c *head);
static void	sort_two(t_stacks *stack);

int	list_size(t_lst2c *head)
{
	t_lst2c	*temp;
	int		size;

	size = 0;
	temp = head;
	while (temp->next != head)
	{
		temp = temp->next;
		size++;
	}
	size++;
	return (size);
}

void	check_sort_cases(t_stacks *stack)
{
	int	size = list_size(stack->a);
	printf("%d\n", size);
	if (size == 1 || stack_is_sorted(stack->a))
		return ;
	else if (size == 2)
		sort_two(stack);
	else
		return ;
	// if (stack->a == stack->a->next || stack_is_sorted(stack->a))
	// 	return ;
	// else if (stack->a == stack->a->next->next)
	// 	sort_two(stack);
	// else
	// 	return ;
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
