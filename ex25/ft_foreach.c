/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 10:28:31 by marvin            #+#    #+#             */
/*   Updated: 2024/11/05 10:37:23 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	pos;

	pos = 0;
	while (pos < length)
		f(tab[pos++]);
}

// #include <stdio.h>
// #include <stdlib.h>
// 
// void print_nbr(int nb)
// {
// 	printf("%d, ", nb);
// }
// 
// int main(void)
// {
// 	int tab[] = {1, 2, 3, 4, 5};
// 	ft_foreach(tab, 5, &print_nbr);
// 
// 	return EXIT_SUCCESS;
// }
