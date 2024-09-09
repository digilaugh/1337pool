/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-qarf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 14:44:15 by iel-qarf          #+#    #+#             */
/*   Updated: 2024/08/14 23:18:03 by iel-qarf         ###   ########.fr       */
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

char	*ft_strdup(char *src)
{
	int		i;
	char	*str;

	i = 0;
	str = malloc((ft_strlen(src) + 1) * sizeof(char));
	if (!str)
	{
		return (NULL);
	}
	while (i < ft_strlen(src))
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*#include <stdio.h>
int	main(void)
{
  char *str = "Hello, world!";
  char *str2 = ft_strdup(str);

  printf("%s\n", str2);
  free(str2);
}*/
