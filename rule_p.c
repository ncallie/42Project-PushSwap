/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rule_p.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncallie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 19:16:49 by ncallie           #+#    #+#             */
/*   Updated: 2021/11/09 20:27:51 by ncallie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_swap **list_a, t_swap **list_b)
{
	t_swap	*head2;

	if (list_b)
	{
		head2 = *list_b;
		*list_b = head2->next;
		if (*list_a)
		{
			head2->next = *list_a;
			*list_a = head2;
		}
		else
		{
			head2->next = NULL;
			*list_a = head2;
		}
	}
	write(1, "pa\n", 3);
}

void	pb(t_swap **list_a, t_swap **list_b)
{
	t_swap	*head2;

	if (*list_a)
	{
		head2 = *list_a;
		*list_a = head2->next;
		if (*list_b)
		{
			head2->next = *list_b;
			*list_b = head2;
		}
		else
		{
			head2->next = NULL;
			*list_b = head2;
		}
	}
	write (1, "pb\n", 3);
}
