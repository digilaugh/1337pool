/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-qarf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 13:51:16 by iel-qarf          #+#    #+#             */
/*   Updated: 2024/08/10 23:48:48 by iel-qarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(char c)
{
	write(1, &c, 1);
}

int	main(int ac, char **av)
{
	int	i;
	int	n;

	n = 1;
	while (n < ac)
	{
		i = 0;
		while (av[n][i] != '\0')
		{
			print(av[n][i]);
			i++;
		}
		print('\n');
		n++;
	}
	return (0);
}
