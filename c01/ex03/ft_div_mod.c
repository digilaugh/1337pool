/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-qarf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 16:39:39 by iel-qarf          #+#    #+#             */
/*   Updated: 2024/07/29 14:50:35 by iel-qarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*#include <stdio.h>
   int main() {
    int x = 10;
    int y = 2;
    int divrslt;
    int modrslt;

    ft_div_mod(x, y, &divrslt, &modrslt);

    printf("%d / %d = %d, %d %% %d = %d\n", x, y, divrslt, x, y, modrslt);

	return 0;
}*/
