/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpancar <bpancar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 01:10:58 by bpancar           #+#    #+#             */
/*   Updated: 2024/10/17 15:38:50 by bpancar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	a;
	int	result;

	result = 0;
	a = 1;
	i = 0;
	while (str[i])
	{
		while (str[i] == 32 || (str[i] <= 13 && str[i] >= 9))
			i++;
		if (str[i] == '-' || str[i] == '+')
		{
			if (str[i] == '-')
				a *= -1;
			i++;
		}
		while (str[i] <= '9' && str[i] >= '0')
			result = (result * 10) + (str[i++] - 48);
		return (result * a);
	}
	return (0);
}
