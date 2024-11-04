/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 16:07:54 by marvin            #+#    #+#             */
/*   Updated: 2024/11/04 16:12:30 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	num;

	if (nb < 0 || nb > 13)
		return (0);
	num = 1;
	while (nb)
		num *= nb--;
	return (num);
}

// #include <stdio.h>
// #include <stdlib.h>
// 
// int main(void)
// {
// 	printf("%d %d %d % d\n", ft_iterative_factorial(0), 
// 	ft_iterative_factorial(10), ft_iterative_factorial(-1), 
// 	ft_iterative_factorial(14));
// 	return EXIT_SUCCESS;
// }
