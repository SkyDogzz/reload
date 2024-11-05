/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 10:10:30 by marvin            #+#    #+#             */
/*   Updated: 2024/11/05 10:38:16 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	pos;

	if (min >= max)
		return (NULL);
	range = malloc(sizeof(int) * (max - min));
	pos = 0;
	while (min < max)
		range[pos++] = min++;
	return (range);
}

// #include <stdio.h>
// 
// int main(void)
// {
// 	int *range;
// 
// 	int min = 10, max = 13;
// 	range = ft_range(min, max);
// 	for(int i = 0; i < max - min; i++)
// 	{
// 		printf("%d ", range[i]);
// 	}
// 
// 	return EXIT_SUCCESS;
// }
