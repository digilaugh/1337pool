/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-qarf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 22:26:57 by iel-qarf          #+#    #+#             */
/*   Updated: 2024/07/31 23:15:47 by iel-qarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*#include <stdio.h>

int ft_str_is_printable(char *str);

int main() {
    char str1[] = "Hello World!";
    char str2[] = "Hello\tWorld!";
    char str3[] = "Hello\nWorld!";
	char str4[] = "";

    printf("%d\n", ft_str_is_printable(str1));
    printf("%d\n", ft_str_is_printable(str2));
    printf("%d\n", ft_str_is_printable(str3));
	printf("%d\n", ft_str_is_printable(str4));

    return 0;
}*/
