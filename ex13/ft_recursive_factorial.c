/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 16:12:51 by marvin            #+#    #+#             */
/*   Updated: 2024/11/04 16:22:57 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0 || nb > 13)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}

// #include <stdio.h>
// #include <stdlib.h>
// 
// int main(void)
// {
// 	printf("%d %d %d % d\n", ft_recursive_factorial(0), 
// 	ft_recursive_factorial(10), ft_recursive_factorial(-1), 
// 	ft_recursive_factorial(14));
// 	return EXIT_SUCCESS;
// }
