/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gandrade <gandrade@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 13:24:43 by gandrade          #+#    #+#             */
/*   Updated: 2022/02/06 13:32:54 by gandrade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h> //REMOVE

static void	print_list(t_lst2c *head) //REMOVE
{
	t_lst2c	*temp;

	temp = head;
	while (temp->next != head)
	{
		printf("%d\n", temp->data);
		temp = temp->next;
	}
	printf("%d\n", temp->data);
}

void	load_values_to_stack_a(char **args, t_stacks *stack)
{
	int	data;
	int	i;

	i = 0;
	while (args[i])
	{
		data = ft_atoi(args[i]);
		ft_lst2c_add_back(&stack->a, ft_lst2c_new(data));
		i++;
	}
	print_list(stack->a); //REMOVE
	ft_strclear2(args);
}
