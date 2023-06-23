/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: owatanab <owatanab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 19:00:04 by owatanab          #+#    #+#             */
/*   Updated: 2023/06/22 13:51:08 by owatanab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include libft.h

int	ft_isalnum(int c)
{
	if (('A' <= c && c <= 'Z') || ('a' <= c && c <= 'z') || '0' <= c
		&& c <= '9')
		return (1);
	return (0);
}