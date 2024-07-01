/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 18:14:20 by flopez-r          #+#    #+#             */
/*   Updated: 2023/10/03 14:55:27 by flopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temporal;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		temporal = (*lst)->next;
		del((*lst)->content);
		free((*lst));
		(*lst) = temporal;
	}
	(*lst) = NULL;
}

/* int	main(void)
{
	t_list **cabecera;
	ft_lstnew(*cabecera);

	char *item1;
	item1 = "Hola";
	ft_lstadd_back(*cabecera, item1);
	printf();
} */