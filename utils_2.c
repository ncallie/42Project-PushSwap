/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncallie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 17:46:25 by ncallie           #+#    #+#             */
/*   Updated: 2021/11/09 20:37:41 by ncallie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*to_binary(int index)
{
	char	*str;
	int		i;

	if (index == 0)
	{
		str = malloc(2);
		str[0] = '0';
		str[1] = '\0';
	}
	else
	{
		i = len_binary(index);
		str = malloc(sizeof(char) * i + 1);
		str[i] = '\0';
		while (index > 0)
		{
			str[--i] = index % 2 + 48;
			index = index / 2;
		}	
	}
	return (str);
}

void	ft_reset_index(int max_binary, t_swap **list_a)
{
	int		j;
	int		i;
	char	*str;
	t_swap	*head;

	head = *list_a;
	while (head != NULL)
	{
		j = 0;
		i = 0;
		str = head->binary;
		head->binary = malloc(sizeof(char) * max_binary);
		while (max_binary > i)
		{
			if ((max_binary - ft_strlen(str)) > i)
				head->binary[i] = '0';
			else
				head->binary[i] = str[j++];
			i++;
		}
		free(str);
		head = head->next;
	}
}

int	lenght(t_swap **list_a)
{
	t_swap	*head;
	int		i;

	i = 0;
	head = *list_a;
	while (head != NULL)
	{
		i++;
		head = head->next;
	}
	return (i);
}

int	check_sort(t_swap **list_a)
{
	t_swap	*temp;

	temp = *list_a;
	if (list_a == NULL)
		return (1);
	while (temp->next != NULL)
	{
		if (temp->data >= temp->next->data)
			return (0);
		temp = temp->next;
	}
	return (1);
}

int	check_duplicate(t_swap **list_a)
{
	t_swap	*current_num;
	t_swap	*next_num;
	int		i;

	i = 0;
	current_num = *list_a;
	while (current_num->next != NULL)
	{
		next_num = current_num->next;
		while (next_num != NULL)
		{
			if (current_num->data == next_num->data)
			{
				i++;
				break ;
			}
			next_num = next_num->next;
		}
		current_num = current_num->next;
	}
	return (i);
}
