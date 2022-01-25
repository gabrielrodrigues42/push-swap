/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gandrade <gandrade@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 21:07:07 by gandrade          #+#    #+#             */
/*   Updated: 2022/01/25 19:19:27 by gandrade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	char	**args;

	if (argc == 1)
		exit(1);
	args = parse_args(argc, argv);
	if (!args)
		exit(1);
	ft_strclear2(args);
	return (0);
}
