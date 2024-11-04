/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 16:45:27 by marvin            #+#    #+#             */
/*   Updated: 2024/11/04 17:05:04 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

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

void	ft_sort_params(int argc, char *argv[])
{
	int		i;
	int		j;
	char	*temp;

	i = 1;
	while (i < argc - 1)
	{
		j = 1;
		while (j < argc - 1)
		{
			if (ft_strcmp(*(argv + j), *(argv + j + 1)) > 0)
			{
				temp = *(argv + j);
				*(argv + j) = *(argv + j + 1);
				*(argv + j + 1) = temp;
			}
			j++;
		}
		i++;
	}
}

int	main(int argc, char *argv[])
{
	int	pos;

	if (argc == 1)
		return (1);
	ft_sort_params(argc, argv);
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

//  #include <unistd.h>
//  
//  void	ft_putchar(char c)
//  {
//  	write(1, &c, 1);
//  }
