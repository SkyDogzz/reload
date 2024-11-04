/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 17:14:14 by marvin            #+#    #+#             */
/*   Updated: 2024/11/04 17:21:07 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	size_t	len;

	len = 0;
	while (*str++)
		len++;
	return ((int) len);
}

char	*ft_strdup(char *src)
{
	char	*dup;
	int		pos;

	dup = malloc(sizeof(char) * (ft_strlen(src) + 1));
	pos = 0;
	while (*src)
		dup[pos++] = *src++;
	dup[pos] = *src;
	return (dup);
}

// #include <stdio.h>
// #include <unistd.h>
// 
// int main(void)
// {
// 	char hello[] = "Hello world!";
// 
// 	printf("%s %s\n", hello, ft_strdup(hello));
// 
// 	return EXIT_SUCCESS;
// }
