/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   additional_func_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaajagro <yaajagro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 03:01:01 by yaajagro          #+#    #+#             */
/*   Updated: 2024/12/17 12:01:43 by yaajagro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	ft_putstr(char *s)
{
	int	i;

	i = 0;
	if (!s)
		return ;
	while (s[i])
	{
		write(1, s + i, 1);
		i++;
	}
}

void	print_err(char *s)
{
	int	i;

	i = 0;
	if (!s)
		return ;
	while (s[i])
	{
		write(2, s + i, 1);
		i++;
	}
}

int	ft_stack_checker(t_list **head)
{
	t_list	*tmp;
	t_list	*curr;

	if (!*head || !head)
		return (1);
	tmp = *head;
	while (tmp)
	{
		curr = tmp->next;
		while (curr)
		{
			if (curr->data == tmp->data)
				return (1);
			curr = curr->next;
		}
		tmp = tmp->next;
	}
	return (0);
}

char	*ft_strdup(char *s)
{
	int		i;
	size_t	len;
	char	*dest;

	if (!s)
		return (NULL);
	len = ft_strlen(s);
	i = 0;
	dest = malloc(len + 1);
	if (!dest)
		return (NULL);
	while (s[i])
	{
		dest[i] = s[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
