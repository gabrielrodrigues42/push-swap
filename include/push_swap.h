/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gandrade <gandrade@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 21:06:50 by gandrade          #+#    #+#             */
/*   Updated: 2022/01/25 18:56:57 by gandrade         ###   ########.fr       */
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

char	**parse_args(int argc, char **argv);
int		input_is_valid(char **args);

#endif
