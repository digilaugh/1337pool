/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-qarf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 20:37:10 by iel-qarf          #+#    #+#             */
/*   Updated: 2024/07/31 23:27:06 by iel-qarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	x;
	int	y;

	x = 0;
	y = 1;
	ft_strlowcase(str);
	while (str[x] != '\0')
	{
		if (str[x] <= 'z' && str[x] >= 'a')
		{
			if (y == 1)
				str[x] = str[x] - 32;
			y = 0;
		}
		else if (str[x] <= '9' && str[x] >= '0')
			y = 0;
		else
		{
			y = 1;
		}
		x++;
	}
	return (str);
}
/*#include <stdio.h>
int	main(void)
{
	char str[] = "salut,comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf("%s", ft_strcapitalize(str));
}*/
