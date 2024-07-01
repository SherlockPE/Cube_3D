/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 16:56:45 by fabriciolop       #+#    #+#             */
/*   Updated: 2023/09/21 13:02:37 by flopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putendl_fd(char *s, int fd)
{
	int		i;
	char	null;

	i = 0;
	null = '\n';
	while (s[i] != '\0')
		write(fd, &s[i++], 1);
	write(fd, &null, 1);
}

/* int main(void)
{
	char	str[];

	str[] = "hola nwn";
	ft_putendl_fd(str, 1);
	ft_putendl_fd(str, 1);
	return (0);
}
 */