/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchappui <tchappui@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 14:21:54 by tchappui          #+#    #+#             */
/*   Updated: 2022/03/25 19:05:08 by tchappui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_splitnbr(char *s, t_data *data)
{
	char	**t;
	int		i;

	t = ft_split(s, ' ');
	data->sizea = ft_tablen(t);
	if (ft_chekc(t, data->sizea, -1) == 1)
	{
		ft_freet(t);
		exit(0);
	}
	data->a = ft_calloc(sizeof (int), data->sizea);
	data->b = ft_calloc(sizeof (int), data->sizea);
	i = -1;
	while (++i != data->sizea)
	{
		if (ft_atoi_long(t[i]) > 2147483647 || ft_atoi_long(t[i]) < -2147483648)
		{
			ft_freet(t);
			ft_free(data);
		}
		data->a[i] = ft_atoi_long(t[i]);
	}
	ft_freet(t);
	if (ft_cheknum(data) == 1)
		ft_free(data);
}

void	ft_maketab(t_data *data, char **argv, int argc)
{
	int	i;

	if (ft_chekc(argv, argc, 0) == 1)
		exit(0);
	i = -1;
	argc--;
	data->sizea = argc;
	data->a = ft_calloc(sizeof (int), data->sizea);
	data->b = ft_calloc(sizeof (int), data->sizea);
	while (++i != argc)
	{
		if (ft_atoi_long(argv[i + 1]) > 2147483647
			|| ft_atoi_long(argv[i + 1]) < -2147483648)
			ft_free(data);
		data->a[i] = ft_atoi_long(argv[i + 1]);
	}
	if (ft_cheknum(data) == 1)
		ft_free(data);
}

int	main(int argc, char **argv)
{
	t_data	data;

	data.sizeb = 0;
	data.c = 0;
	if (argc == 1)
		return (1);
	if (argc == 2)
		ft_splitnbr(argv[1], &data);
	else
		ft_maketab(&data, argv, argc);
	if (data.sizea < 4)
		ft_algo3(&data);
	else if (data.sizea < 6)
		ft_algo5(&data);
	else
		ft_algo100(&data);
	free(data.a);
	free(data.b);
}
