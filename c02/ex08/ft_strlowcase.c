/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-qarf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 20:20:38 by iel-qarf          #+#    #+#             */
/*   Updated: 2024/07/31 21:48:35 by iel-qarf         ###   ########.fr       */
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
/*#include<stdio.h>
int main() {
    char test_string[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ!";
    char *result = ft_strlowcase(test_string);
    printf("%s\n", result);
    return 0;
}*/
