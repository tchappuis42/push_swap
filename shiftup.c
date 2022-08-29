/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   shiftup.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchappui <tchappui@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 19:03:08 by tchappui          #+#    #+#             */
/*   Updated: 2022/03/14 13:21:31 by tchappui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rotatea(t_data *data, int k)
{
	int	*t;
	int	i;

	i = -1;
	t = ft_calloc(sizeof (int), data->sizea);
	while (++i != data->sizea)
		t[i] = data->a[i];
	i = -1;
	while (++i != data->sizea - 1)
		data->a[i] = t[i + 1];
	data->a[data->sizea - 1] = t[0];
	free(t);
	if (k == 1)
		ft_printf("ra\n");
	data->c++;
}

void	ft_rotateb(t_data *data, int k)
{
	int	*t;
	int	i;

	i = -1;
	t = ft_calloc(sizeof (int), data->sizeb);
	while (++i != data->sizeb)
		t[i] = data->b[i];
	i = -1;
	while (++i != data->sizeb - 1)
		data->b[i] = t[i + 1];
	data->b[data->sizeb - 1] = t[0];
	free(t);
	if (k == 1)
		ft_printf("rb\n");
	data->c++;
}

void	ft_rotateab(t_data *data)
{
	ft_rotatea(data, 0);
	ft_rotateb(data, 0);
	ft_printf("rr\n");
}
