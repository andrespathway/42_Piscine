/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalkan <aalkan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 17:20:57 by aalkan            #+#    #+#             */
/*   Updated: 2021/11/30 17:21:23 by aalkan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	a[3];

	a[0] = '0';
	while (a[0] < '8')
	{
		a[1] = a[0] + 1;
		while (a[1] < '9')
		{
			a[2] = a[1] + 1;
			while (a[2] <= '9')
			{
				write(1, a, 3);
				if (a[0] == '7' && a[1] == '8' && a[2] == '9')
				{
					break ;
				}
				write(1, ", ", 2);
				a[2]++;
			}
			a[1]++;
		}
		a[0]++;
	}
}
