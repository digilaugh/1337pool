/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-qarf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 15:22:48 by iel-qarf          #+#    #+#             */
/*   Updated: 2024/08/14 23:27:59 by iel-qarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	range;
	int	*tab;
	int	i;

	if (min >= max)
		return (0);
	range = max - min;
	tab = malloc(range * sizeof(int));
	i = 0;
	if (tab == NULL)
		return (NULL);
	else
	{
		while (min < max)
		{
			tab[i] = min;
			i++;
			min++;
		}
		return (tab);
	}
}
/*#include <stdio.h>

int	main(void)
{
	int *p = ft_range(0, 5);
	int i = 0;
	int range = 5 - 0;
	while (i < range)
	{
		printf("%d",p[i]);
		i++;
	}
}*/
