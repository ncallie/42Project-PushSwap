/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncallie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 18:56:18 by ncallie           #+#    #+#             */
/*   Updated: 2021/11/10 13:35:37 by ncallie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	val_pos(t_swap *list, int pos)
{
	int	i;

	i = 0;
	while (list)
	{
		if (i == pos)
			return (list->data);
		list = list-> next;
		i++;
	}
	return (-1);
}

int	small_index_num(t_swap **list_a)
{
	int		min;
	int		pos;
	t_swap	*head;
	int		res;

	min = 2147483647;
	pos = 0;
	res = 0;
	head = *list_a;
	while (head != NULL)
	{
		if (min > head->data)
		{
			min = head->data;
			res = pos;
		}
		head = head->next;
		pos++;
	}
	return (res);
}

int	len_argv(t_swap **list_a)
{
	t_swap	*head;
	int		len;

	len = 0;
	head = *list_a;
	while (head)
	{
		len++;
		head = head->next;
	}
	return (len);
}
