/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchappui <tchappui@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 16:57:02 by tchappui          #+#    #+#             */
/*   Updated: 2022/03/14 17:16:27 by tchappui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_freet(char **t)
{
	int	i;

	i = 0;
	while (i != ft_tablen(t))
	{
		free(t[i]);
		i++;
	}
	free(t);
}

void	ft_free(t_data *data)
{
	free(data->a);
	free(data->b);
	ft_printf("ERROR\n");
	exit(0);
}
