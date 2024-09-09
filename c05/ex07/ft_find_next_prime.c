/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-qarf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 17:03:24 by iel-qarf          #+#    #+#             */
/*   Updated: 2024/08/12 23:09:00 by iel-qarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	if (nb < 2)
		return (0);
	i = 2;
	while (nb % i != 0)
		i++;
	if (i == nb)
		return (1);
	else
		return (0);
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	i;

	i = nb;
	while (!ft_is_prime(i))
	{
		i++;
	}
	return (i);
}
/*#include <stdio.h>
int	main()
{
	printf("%d\n", ft_find_next_prime(8));
}*/
