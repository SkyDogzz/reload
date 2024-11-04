/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 16:17:16 by marvin            #+#    #+#             */
/*   Updated: 2024/11/04 16:22:31 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	num;

	num = 1;
	while (num * num <= nb && num * num > 0)
	{
		if (num * num == nb)
			return (num);
		num++;
	}
	return (0);
}

// #include <stdio.h>
// #include <stdlib.h>
// 
// int main(void)
// {
// 	printf("%d %d %d %d\n", ft_sqrt(16), ft_sqrt(-16), 
// 		ft_sqrt(1000000000000), ft_sqrt(17));
// 	return EXIT_SUCCESS;
// }
