/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaj <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 19:11:27 by mbaj              #+#    #+#             */
/*   Updated: 2024/02/29 19:11:31 by mbaj             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		c += 32;
	}
	return (c);
}
/*
int	main(void)
{
	char	a;

	a = 'G';
	printf("%d", ft_tolower(a));
	return (0);
}*/
