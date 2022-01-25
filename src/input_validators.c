/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_validators.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gandrade <gandrade@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 16:27:54 by gandrade          #+#    #+#             */
/*   Updated: 2022/01/25 19:15:57 by gandrade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	input_has_valid_chars(char *str);
static int	input_has_valid_interval(char *str);
static int	input_has_valid_position(char *str);
static int	input_has_duplicates(char **args);

int	input_is_valid(char **args)
{
	int	i;

	i = 0;
	while (args[i])
	{
		if (!input_has_valid_chars(args[i]) \
			|| !input_has_valid_interval(args[i]) \
			|| !input_has_valid_position(args[i]) \
			|| input_has_duplicates(args))
		{
			write(2, "Error\n", 6);
			return (0);
		}
		i++;
	}
	return (1);
}

static int	input_has_valid_chars(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!ft_isdigit(str[i]) && !ft_isspace(str[i]) && !ft_issign(str[i]))
			return (0);
		i++;
	}
	return (1);
}

static int	input_has_valid_interval(char *str)
{
	long	value;

	value = ft_atol(str);
	if (value > INT_MAX || value < INT_MIN)
		return (0);
	return (1);
}

static int	input_has_valid_position(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((!ft_isdigit(str[i]) \
			&& (!ft_issign(str[i]) || !ft_isdigit(str[i + 1])) \
			&& (!ft_isdigit(str[i]) || !ft_issign(str[i + 1]))) \
			|| (i > 0 && (ft_issign(str[i]) && ft_isdigit(str[i - 1]))))
			return (0);
		i++;
	}
	return (1);
}

static int	input_has_duplicates(char **args)
{
	long	value;
	long	next;
	int		i;
	int		j;

	i = 0;
	while (args[i])
	{
		value = ft_atol(args[i]);
		j = 1 + i;
		while (args[j])
		{
			next = ft_atol(args[j]);
			if (value == next)
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}
