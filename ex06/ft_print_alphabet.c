/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 15:16:58 by marvin            #+#    #+#             */
/*   Updated: 2024/11/04 15:53:59 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_alphabet(void)
{
	char	letter;

	letter = 'a';
	while (letter <= 'z')
		ft_putchar(letter++);
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
// 	ft_print_alphabet();
// 
// 	return EXIT_SUCCESS;
// }
