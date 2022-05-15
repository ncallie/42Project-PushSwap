/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncallie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 12:40:12 by ncallie           #+#    #+#             */
/*   Updated: 2021/11/09 20:34:20 by ncallie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_isdigit(char *str)
{
	int	i;

	i = 0;
	i = i + ((str[0] == '-' || str[0] == '+') && str[1]);
	while (str[i])
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

t_swap	*lstnew(int data)
{
	t_swap	*newlist;

	newlist = malloc(sizeof(*newlist));
	newlist->data = data;
	newlist->next = NULL;
	return (newlist);
}

void	lstadd_back(t_swap **lists, t_swap *newlist)
{
	t_swap	*tmp_lists;

	tmp_lists = *lists;
	if (*lists == NULL)
	{
		*lists = newlist;
		newlist->next = NULL;
	}
	else
	{
		while (tmp_lists->next)
			tmp_lists = tmp_lists->next;
		tmp_lists->next = newlist;
		newlist->next = NULL;
	}
}

void	print_error(void)
{
	exit(write(2, "Error\n", 6));
}
