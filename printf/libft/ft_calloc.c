/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchappui <tchappui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 16:51:10 by tchappui          #+#    #+#             */
/*   Updated: 2022/03/01 20:04:24 by tchappui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t elementCount, size_t elementSize)
{
	void	*dest;

	dest = malloc(elementCount * elementSize);
	if (!dest)
		return (0);
	ft_bzero(dest, elementCount * elementSize);
	return (dest);
}
