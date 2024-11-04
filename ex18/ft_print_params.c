/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 16:40:34 by marvin            #+#    #+#             */
/*   Updated: 2024/11/04 17:05:41 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int	main(int argc, char *argv[])
{
	int	pos;

	if (argc == 1)
		return (1);
	pos = 1;
	while (pos < argc)
	{
		while (*argv[pos])
			ft_putchar(*argv[pos]++);
		ft_putchar('\n');
		pos++;
	}
	return (1);
}

// #include <unistd.h>
// 
// void	ft_putchar(char c)
// {
// 	write(1, &c, 1);
// }
