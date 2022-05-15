/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rule_rr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncallie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 19:16:55 by ncallie           #+#    #+#             */
/*   Updated: 2021/11/10 13:33:18 by ncallie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_swap **list_a, int i)
{
	t_swap	*first_list;
	t_swap	*rotate_list;
	t_swap	*mate_list;

	if ((*list_a) == NULL || (*list_a)->next == NULL)
		return ;
	first_list = *list_a;
	mate_list = *list_a;
	while (mate_list->next->next != NULL)
		mate_list = mate_list->next;
	rotate_list = mate_list->next;
	mate_list->next = NULL;
	rotate_list->next = first_list;
	*list_a = rotate_list;
	if (i == 1)
		write(1, "rra\n", 4);
}

void	rrb(t_swap **list_b, int i)
{
	t_swap	*first_list;
	t_swap	*rotate_list;
	t_swap	*mate_list;

	if ((*list_b) == NULL || (*list_b)->next == NULL)
		return ;
	first_list = *list_b;
	mate_list = *list_b;
	while (mate_list->next->next != NULL)
		mate_list = mate_list->next;
	rotate_list = mate_list->next;
	mate_list->next = NULL;
	rotate_list->next = first_list;
	*list_b = rotate_list;
	if (i == 1)
		write(1, "rra\n", 4);
}

void	rrr(t_swap **list_a, t_swap **list_b)
{
	rra(list_a, 0);
	rrb(list_b, 0);
	write(1, "rrr\n", 4);
}
