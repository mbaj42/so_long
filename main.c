/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaj <mbaj@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 17:23:03 by mbaj              #+#    #+#             */
/*   Updated: 2024/08/12 02:20:42 by mbaj             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	main(int argc, char **argv)
{
	char	**map;
	t_game	game;

	map = NULL;
	if (argc == 2)
	{
		parsing_map(argv[1]);
		validate_map(map);
		start_game(game);
	}
	else
		error(NULL, "Invalid Number of Arguments");
	return (0);
}
