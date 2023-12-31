/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: owatanab <owatanab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 12:09:18 by owatanab          #+#    #+#             */
/*   Updated: 2023/07/25 16:32:11 by owatanab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int				i;
	unsigned long	j;
	int				k;

	i = 1;
	j = 0;
	k = 0;
	while (*str == ' ' || (9 <= *str && *str <= 13))
		str++;
	if (*str == '-' || *str == '+')
		i -= *str++ - '+';
	while (*str == 0)
		str++;
	while (str[k] <= '9' && str[k] >= '0')
	{
		if ((j > 922337203685477580) || (j == 922337203685477580 && ((i == 1
						&& str[k] > '7') || (i == -1 && str[k] > '8'))))
			return ((-i - 1) / 2);
		j *= 10;
		j += str[k++] - '0';
	}
	return ((int)j * i);
}

// int	main(void)
// {
// 	printf("%d%d\n", ft_atoi("9223372036854775808"),
// 			atoi("9223372036854775808"));
// 	printf("%d", ft_atoi("-+1"));
// }