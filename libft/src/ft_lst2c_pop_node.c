/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst2c_pop_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gandrade <gandrade@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 16:49:14 by gandrade          #+#    #+#             */
/*   Updated: 2022/02/11 16:52:23 by gandrade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_lst2c	*ft_lst2c_pop_node(t_lst2c **head, t_lst2c *node)
{
	if (*head == node)
	{
		if (node == node->next)
			*head = 0;
		else
			*head = node->next;
	}
	if (node != node->next)
	{
		node->prev->next = node->next;
		node->next->prev = node->prev;
	}
	node->prev = NULL;
	node->next = NULL;
	return (node);
}
