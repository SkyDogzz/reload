/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 15:51:51 by marvin            #+#    #+#             */
/*   Updated: 2024/11/04 15:52:37 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_is_negative(int n)
{
	if (n < 0)
		ft_putchar('N');
	else
		ft_putchar('P');
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
// 	ft_is_negative(1);
// 	ft_is_negative(0);
// 	ft_is_negative(-1);
// 
// 	return EXIT_SUCCESS;
// }
