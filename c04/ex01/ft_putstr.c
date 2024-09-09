/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-qarf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 15:22:26 by iel-qarf          #+#    #+#             */
/*   Updated: 2024/08/07 00:33:59 by iel-qarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(char i)
{
	write(1, &i, 1);
}

void	ft_putstr(char *str)
{
	int	x;

	x = 0;
	while (str[x])
	{
		print(str[x]);
		x++;
	}
}
/*int	main(void)
{
	char	*str;

	str = "this code working\n";
	ft_putstr(str);
	return (0);
}*/
