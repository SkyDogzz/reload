/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 15:24:29 by marvin            #+#    #+#             */
/*   Updated: 2024/11/04 15:53:05 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_numbers(void)
{
	char	number;

	number = '0';
	while (number <= '9')
		ft_putchar(number++);
}

// #include <unistd.h>
// #include <stdlib.h>
// 
// void	ft_putchar(char	c)
// {
// 	write(1, &c, 1);
// }
// 
// int main(void)
// {
// 	ft_print_numbers();
// 
// 	return EXIT_SUCCESS;
// }
