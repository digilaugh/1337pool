/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-qarf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 14:30:48 by iel-qarf          #+#    #+#             */
/*   Updated: 2024/08/11 14:37:28 by iel-qarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	res;

	res = 1;
	if (nb < 0)
		return (0);
	while (nb)
		res *= nb--;
	return (res);
}
/*#include <stdio.h>
int	main()
{
	int num = 5;
	printf("The factorial of %d is %d\n", num, ft_iterative_factorial(num));
}*/
