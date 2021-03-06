/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gandrade <gandrade@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 21:07:07 by gandrade          #+#    #+#             */
/*   Updated: 2022/02/06 13:28:37 by gandrade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stacks	stack;
	char		**args;

	if (argc == 1)
		exit(1);
	args = parse_args(argc, argv);
	if (!args)
		exit(1);
	stack.a = 0;
	stack.b = 0;
	load_values_to_stack_a(args, &stack);
	check_sort_cases(&stack);
	clear_exit(&stack, 0);
	return (0);
}
