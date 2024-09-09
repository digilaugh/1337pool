/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-qarf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 21:55:19 by iel-qarf          #+#    #+#             */
/*   Updated: 2024/07/31 20:53:32 by iel-qarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			i++;
		}
		else
			return (0);
	}
	return (1);
}
/*#include <stdio.h>
int    main()
{
    printf("%d", ft_str_is_numeric("01948987493"));
    printf("\n%d", ft_str_is_numeric("0484882j8995489"));
    printf("\n%d", ft_str_is_numeric("-_jsdsdc67sdlkc,"));
	printf("\n%d", ft_str_is_numeric(""));
}*/
