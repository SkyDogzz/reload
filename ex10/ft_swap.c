/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 15:58:28 by marvin            #+#    #+#             */
/*   Updated: 2024/11/04 16:00:47 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

// #include <stdio.h>
// #include <stdlib.h>
// 
// int main(void)
// {
// 	int a = 42, b = 24;
// 	printf("%d %d\n", a, b);
// 	ft_swap(&a, &b);
// 	printf("%d %d\n", a, b);
// 	return EXIT_SUCCESS;
// }
