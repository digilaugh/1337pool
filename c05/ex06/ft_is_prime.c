/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-qarf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 16:38:06 by iel-qarf          #+#    #+#             */
/*   Updated: 2024/08/11 17:02:24 by iel-qarf         ###   ########.fr       */
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
}
/*#include <stdio.h>
int	main()
{
	int num = 3;

	if (ft_is_prime(num))
		printf("%d is a prime number.\n", num);
	else
		printf("%d is not a prime number.\n", num);
}*/
