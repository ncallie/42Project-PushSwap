/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncallie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 17:50:00 by ncallie           #+#    #+#             */
/*   Updated: 2021/11/09 20:31:25 by ncallie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_2(t_swap **list_a)
{
	ra(list_a, 1);
}

void	sort_3(t_swap **list_a)
{
	t_swap	*head;

	head = *list_a;
	if (val_pos(head, 0) > val_pos(head, 1) && val_pos(head, 0)
		< val_pos(head, 2) && val_pos(head, 1) < val_pos(head, 2))
		sa(list_a, 1);
	else if (val_pos(head, 0) > val_pos(head, 1) && val_pos(head, 0)
		> val_pos(head, 2) && val_pos(head, 1) > val_pos(head, 2))
	{
		sa(list_a, 1);
		rra(list_a, 1);
	}
	else if (val_pos(head, 0) > val_pos(head, 1) && val_pos(head, 0)
		> val_pos(head, 2) && val_pos(head, 1) < val_pos(head, 2))
		ra(list_a, 1);
	else if (val_pos(head, 0) < val_pos(head, 1) && val_pos(head, 0)
		< val_pos(head, 2) && val_pos(head, 1) > val_pos(head, 2))
	{
		sa(list_a, 1);
		ra(list_a, 1);
	}
	else if (val_pos(head, 0) < val_pos(head, 1) && val_pos(head, 0)
		> val_pos(head, 2) && val_pos(head, 1) > val_pos(head, 2))
		rra(list_a, 1);
}

void	sort_4(t_swap **list_a)
{
	t_swap	*list_b;
	int		i;
	int		j;

	list_b = NULL;
	i = small_index_num(list_a);
	j = (lenght(list_a) / 2);
	if (j <= i)
	{
		while (i < lenght(list_a))
		{
			rra(list_a, 1);
			i++;
		}
	}
	else
	{
		while (i-- > 0)
			ra(list_a, 1);
	}
	pb(list_a, &list_b);
	sort_3(list_a);
	pa(list_a, &list_b);
}

void	sort_5(t_swap **list_a)
{
	t_swap	*list_b;
	int		i;
	int		j;

	list_b = NULL;
	i = small_index_num(list_a);
	j = (lenght(list_a) / 2);
	if (j <= i)
	{
		while (i < lenght(list_a))
		{
			rra(list_a, 1);
			i++;
		}
	}
	else
	{
		while (i-- > 0)
			ra(list_a, 1);
	}
	pb(list_a, &list_b);
	sort_4(list_a);
	pa(list_a, &list_b);
}

void	radix_sort(t_swap **list_a)
{
	t_swap	*list_b;
	int		len_pb;
	int		len_a;
	int		i;

	list_b = NULL;
	i = ft_strlen((*list_a)->binary);
	while (--i >= 0)
	{
		len_a = len_argv(list_a);
		len_pb = 0;
		while (len_a-- > 0)
		{
			if ((*list_a)->binary[i] == '0')
			{
				pb(list_a, &list_b);
				len_pb++;
			}
			else
				ra(list_a, 1);
		}
		while (len_pb-- > 0)
			pa(list_a, &list_b);
	}
}
