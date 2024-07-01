/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 12:09:45 by flopez-r          #+#    #+#             */
/*   Updated: 2023/10/03 14:56:19 by flopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_nodo;

	new_nodo = ft_calloc(1, sizeof(*new_nodo));
	if (new_nodo == 0)
		return (0);
	new_nodo->content = content;
	return (new_nodo);
}
