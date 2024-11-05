/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 10:40:47 by marvin            #+#    #+#             */
/*   Updated: 2024/11/05 12:05:14 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int (*f)(char *))
{
	int nb;

	nb = 0;
	while (*tab++)
		if (f(*tab))
			nb++;
	return (nb);
}

// #include <stdlib.h>
// #include <stdio.h>
// 
// int test_f(char *tab)
// {
// 	(void) tab;
// 	return (1);
// }
// 
// int main(void)
// {
// 	char *tab[] = {"test1iuhiuhiuh", "test2", 0};
// 	printf("%d\n", ft_count_if(tab, &test_f));
// 
// 	return EXIT_SUCCESS;
// }
