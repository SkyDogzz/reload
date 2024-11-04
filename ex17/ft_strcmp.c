/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 16:36:40 by marvin            #+#    #+#             */
/*   Updated: 2024/11/04 16:46:31 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

// #include <stdio.h>
// #include <stdlib.h>
// 
// int main(void)
// {
// 	printf("%d %d %d %d", ft_strcmp("abc", "abc"), ft_strcmp("abc", "abb"), 
// 		ft_strcmp("abb", "abc"), ft_strcmp("abc", "ab"));
// 	return EXIT_SUCCESS;
// }
