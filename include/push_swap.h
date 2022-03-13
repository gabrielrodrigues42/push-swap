/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gandrade <gandrade@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 21:06:50 by gandrade          #+#    #+#             */
/*   Updated: 2022/03/13 15:39:58 by gandrade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft.h"

# define INT_MAX 2147483647
# define INT_MIN -2147483648

typedef struct s_stacks
{
	t_lst2c	*a;
	t_lst2c	*b;
}	t_stacks;

void	push(t_stacks *stack, char name);
void	swap(t_stacks *stack, char name);
void	rotate(t_stacks *stack, char name);
void	reverse_rotate(t_stacks *stack, char name);
char	**parse_args(int argc, char **argv);
int		input_is_valid(char **args);
void	check_sort_cases(t_stacks *stack);
void	load_values_to_stack_a(char **args, t_stacks *stack);
void	clear_exit(t_stacks *stack, int code);
void	sort_three(t_stacks *stack);
void	sort_five(t_stacks *stack);

#endif
