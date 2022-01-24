/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gandrade <gandrade@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 21:07:07 by gandrade          #+#    #+#             */
/*   Updated: 2022/01/24 16:28:09 by gandrade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h> // REMOVE

int	main(int argc, char **argv)
{
	if (argc == 1 || !parse_args(argc, argv))
		exit(1);
	else
		printf("pode passar\n");
	return (0);
}
