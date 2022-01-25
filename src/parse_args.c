/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gandrade <gandrade@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 16:26:10 by gandrade          #+#    #+#             */
/*   Updated: 2022/01/25 18:59:16 by gandrade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static char	**get_args(int argc, char **argv);
static char	**get_args_aux(int splits, int argc, char **argv);
static int	need_split(char *str);

char	**parse_args(int argc, char **argv)
{
	char	**args;

	args = get_args(argc, argv);
	if (input_is_valid(args))
		return (args);
	ft_strclear2(args);
	return (NULL);
}

static char	**get_args(int argc, char **argv)
{
	char	**args;
	int		splits;
	int		i;

	splits = 0;
	i = 1;
	while (argv[i])
		splits += need_split(ft_strtrim(argv[i++], " "));
	args = get_args_aux(splits, argc, argv);
	return (args);
}

static char	**get_args_aux(int splits, int argc, char **argv)
{
	char	**args;
	char	**temp;
	int		i;
	int		j;
	int		k;

	args = ft_calloc((splits + argc), sizeof(char *));
	if (!args)
		return (NULL);
	i = 1;
	k = 0;
	while (argv[i])
	{
		temp = ft_split(argv[i], ' ');
		j = 0;
		while (temp[j])
		{
			args[k] = ft_strdup(temp[j]);
			k++;
			j++;
		}
		ft_strclear2(temp);
		i++;
	}
	return (args);
}

static int	need_split(char *str)
{
	int	space;
	int	i;

	space = 0;
	i = 0;
	while (str[i])
		if (ft_isspace(str[i++]) && !ft_isspace(str[i + 1]))
			space++;
	if (space != 0)
		space++;
	free(str);
	return (space);
}
