/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhtoo-h <juhtoo-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 08:38:13 by juhtoo-h          #+#    #+#             */
/*   Updated: 2024/08/30 14:47:37 by juhtoo-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*p;

	if (nmemb <= 0 || size <= 0)
	{
		nmemb = 1;
		size = 1;
	}
	if ((nmemb * size) / nmemb != size)
		return (0);
	p = malloc(nmemb * size);
	if (!p)
		return (NULL);
	ft_bzero(p, nmemb * size);
	return (p);
}

// #include <stdio.h>

// int main(void)
// {
// 	int *i = calloc(-5, -5);
// 	int *i1 = ft_calloc(-5, -5);
// 	free(i);
// 	free(i1);
// 	return (0);
// }
