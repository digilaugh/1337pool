/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-qarf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 15:46:43 by iel-qarf          #+#    #+#             */
/*   Updated: 2024/08/15 00:42:04 by iel-qarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

int	calc_total(char **strs, int size, char *sep)
{
	int	i;
	int	total;

	i = 0;
	total = 0;
	while (i < size)
	{
		total = total + ft_strlen(strs[i]);
		i++;
	}
	total = total + (ft_strlen(sep) * size);
	return (total);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		total;
	char	*tab;
	int		i;

	total = calc_total(strs, size, sep);
	tab = malloc((total + 1) * sizeof(char));
	i = 0;
	if (tab == 0)
		return (NULL);
	while (i < size)
	{
		ft_strcat(tab, strs[i]);
		if (i < size - 1)
			ft_strcat(tab, sep);
		i++;
	}
	return (tab);
}
/*#include <stdio.h>

int	main(void)
{
	char *str[3];
	str[0] = "hello";
	str[1] = "man";
	str[2] = "wsup";
	printf("%s",ft_strjoin(3, str, ",	"));
}*/
