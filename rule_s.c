/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rule_s.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncallie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 19:16:57 by ncallie           #+#    #+#             */
/*   Updated: 2021/11/09 20:30:30 by ncallie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_swap **listA, int n)
{
	t_swap	*head;
	t_swap	*swap;

	if (listA && (*listA)->next)
	{
		head = *listA;
		swap = head->next;
		head->next = swap->next;
		swap->next = head;
		*listA = swap;
	}
	if (n == 1)
		write(1, "sa\n", 3);
}

void	sb(t_swap **listB, int n)
{
	t_swap	*head;
	t_swap	*swap;

	if (listB && (*listB)->next)
	{
		head = *listB;
		swap = head->next;
		head->next = swap->next;
		swap->next = head;
		*listB = swap;
	}
	if (n == 1)
		write (1, "sb\n", 3);
}

void	ss(t_swap **listA, t_swap **listB)
{
	sa(listA, 0);
	sb(listB, 0);
	write(1, "ss\n", 3);
}
