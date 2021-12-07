/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalkan <aalkan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 11:48:11 by aalkan            #+#    #+#             */
/*   Updated: 2021/12/05 11:48:15 by aalkan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	while (*str != '\0')
	{
		if (!(*str <= 'z' && *str >= 'a') && !(*str <= 'Z' && *str >= 'A'))
			return (0);
		str++;
	}
	return (1);
}
