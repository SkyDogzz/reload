/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 16:23:18 by marvin            #+#    #+#             */
/*   Updated: 2024/11/04 16:36:18 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

// #include <unistd.h>
// #include <stdlib.h>
// 
// void	ft_putchar(char c)
// {
// 	write(1, &c, 1);
// }
// 
// int main(void)
// {
// 	ft_putstr("Hello World!");
// 	return EXIT_SUCCESS;
// }
