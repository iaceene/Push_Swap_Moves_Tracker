/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_a_utiles_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaajagro <yaajagro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 02:54:31 by yaajagro          #+#    #+#             */
/*   Updated: 2024/12/17 18:56:21 by yaajagro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

t_list	*ft_lstlast(t_list *head)
{
	if (!head)
		return (NULL);
	while (head && head->next)
		head = head->next;
	return (head);
}

int	ft_addback(t_list **head, t_list *new)
{
	t_list	*last_node;

	if (!head || !new)
		return (1);
	if (!*head)
		*head = new;
	else
	{
		last_node = ft_lstlast(*head);
		last_node->next = new;
	}
	return (0);
}

t_list	*ft_addnew(int data)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->data = data;
	new->next = NULL;
	return (new);
}

int	ft_overflow(char *s)
{
	long	n;

	n = ft_atol(s);
	if (n == (long)INT_MAX + 2)
		return (1);
	return (0);
}
