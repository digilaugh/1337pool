/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-qarf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 16:26:30 by iel-qarf          #+#    #+#             */
/*   Updated: 2024/07/28 16:37:37 by iel-qarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*#include <stdio.h>
  int main()
  {
    char source[] = "copy done";
    char destination[10];

    ft_strcpy(destination, source);

	printf("Source: %s\n", source);
	printf("Destination: %s\n", destination);

    return 0;
	}*/
