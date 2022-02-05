/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gandrade <gandrade@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 21:07:07 by gandrade          #+#    #+#             */
/*   Updated: 2022/02/05 11:52:16 by gandrade         ###   ########.fr       */
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

static void	load_values_to_stack_a(char **args, t_stacks *stack)
{
	int	data;
	int	i;

	stack->a = 0;
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

static void	check_sort_cases(t_stacks *stack)
{
	if (ft_lst2c_size(stack->a) == 1)
	{
		ft_lst2c_clear(&stack->a);
		exit(0);
	}
}

int	main(int argc, char **argv)
{
	t_stacks	stack;
	char		**args;

	if (argc == 1)
		exit(1);
	args = parse_args(argc, argv);
	if (!args)
		exit(1);
	load_values_to_stack_a(args, &stack);
	check_sort_cases(&stack);
	ft_lst2c_clear(&stack.a);
	return (0);
}
