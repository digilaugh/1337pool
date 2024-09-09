/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-qarf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 15:42:56 by iel-qarf          #+#    #+#             */
/*   Updated: 2024/08/14 21:21:56 by iel-qarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	length;
	int	i;
	int	*tab;

	length = max - min;
	i = 0;
	if (length <= 0)
	{
		*range = 0;
		return (0);
	}
	tab = (int *)malloc(length * sizeof(int));
	if (!tab)
		return (-1);
	else
	{
		while (i < length)
		{
			tab[i] = min + i;
			i++;
		}
		*range = tab;
		return (length);
	}
}
/*#include <stdio.h>
int	main(void)
{
	int *range;
	int min = 5;
	int max = 10;
	printf ("%d" ,ft_ultimate_range(&range, min, max));
	free(range);
}*/
