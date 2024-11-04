/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 16:01:09 by marvin            #+#    #+#             */
/*   Updated: 2024/11/04 16:07:31 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b == 0)
		return ;
	*div = a / b;
	*mod = a % b;
}

// #include <stdio.h>
// #include <stdlib.h>
// 
// int main(void)
// {
// 	int a = 10, b = 3;
// 	int div, mod;
// 	ft_div_mod(a, b, &div, &mod);
// 	printf("%d %d\n", div, mod);
// 	return EXIT_SUCCESS;
// }
