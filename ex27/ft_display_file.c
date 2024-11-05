/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 12:40:00 by marvin            #+#    #+#             */
/*   Updated: 2024/11/05 13:13:38 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_display_file.h"
#include <stdio.h>

int	main(int argc, char *argv[])
{
	int	fd;

	if (argc == 1)
	{
		ft_putstr_err("File name missing.\n");
		return (EXIT_FAILURE);
	}
	if (argc > 2)
	{
		ft_putstr_err("Too many arguments.\n");
		return (EXIT_FAILURE);
	}
	fd = open(argv[1], O_RDONLY);
	if (!fd)
	{
		ft_putstr_err("Cannot read file.\n");
		return (EXIT_FAILURE);
	}
	printf("Hello, %d\n", fd);
	display_file(fd);
	return (EXIT_SUCCESS);
}

void	display_file(int fd)
{
	char	letter;

	while (read(fd, &letter, 1))
		write(1, &letter, 1);
}

size_t	ft_strlen(char *str)
{
	size_t	len;

	len = 0;
	while (*str++)
		len++;
	return (len);
}

void	ft_putstr_err(char *str)
{
	write(2, str, ft_strlen(str));
}
