/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-qarf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 16:40:34 by iel-qarf          #+#    #+#             */
/*   Updated: 2024/07/29 14:53:10 by iel-qarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{
		write (1, &str[x], 1);
		x++;
	}
}
/*#include <stdio.h>

int main() {
    char str[] = "Hello, World!";
    ft_putstr(str);
    return 0;
}*/
