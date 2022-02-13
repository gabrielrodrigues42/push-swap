/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst2c_size.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gandrade <gandrade@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 22:38:51 by gandrade          #+#    #+#             */
/*   Updated: 2022/02/12 23:03:45 by gandrade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lst2c_size(t_lst2c *head)
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
