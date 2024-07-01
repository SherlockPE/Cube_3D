/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 16:57:20 by fabriciolop       #+#    #+#             */
/*   Updated: 2023/09/25 12:06:27 by flopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	char	result;
	long	number;

	number = (long) n;
	if (number < 0)
	{
		write(fd, "-", 1);
		number = -number;
	}
	if (number > 9)
		ft_putnbr_fd(number / 10, fd);
	result = (number % 10) + '0';
	write(fd, &result, 1);
}

/* int	main(void)
{
	int	number;

	number = -123234564;
	ft_putnbr_fd(number, 1);
	return (0);
}
 */
// n = -1234