/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-qarf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 22:29:25 by iel-qarf          #+#    #+#             */
/*   Updated: 2024/07/31 21:02:11 by iel-qarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			i++;
		}
		else
			return (0);
	}
	return (1);
}
/*#include <stdio.h>
   int	main(void)
{
	printf("%d", ft_str_is_uppercase("ABCDEFGHIJQL"));
	printf("\n%d", ft_str_is_uppercase("ABCDEFghIJQL"));
	printf("\n%d", ft_str_is_uppercase("-_134556efSghij67"));
	printf("\n%d", ft_str_is_uppercase(""));
}*/
