/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-qarf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 23:46:32 by iel-qarf          #+#    #+#             */
/*   Updated: 2024/08/11 01:16:32 by iel-qarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	x;

	x = 0;
	while (str[x])
	{
		write (1, &str[x], 1);
		x++;
	}
}

int	main(int ac, char **av)
{
	if (ac)
		ft_putstr(av[0]);
	write (1, "\n", 1);
	return (0);
}
