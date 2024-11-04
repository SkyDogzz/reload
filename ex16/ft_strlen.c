/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 16:33:14 by marvin            #+#    #+#             */
/*   Updated: 2024/11/04 16:35:59 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_strlen(char *str)
{
	size_t	len;

	len = 0;
	while (*str++)
		len++;
	return ((int) len);
}

// #include <stdio.h>
// #include <stdlib.h>
// 
// int main(void)
// {
// 	printf("%d", ft_strlen("Hello World!\n"));
// 	return EXIT_SUCCESS;
// }
