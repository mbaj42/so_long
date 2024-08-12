/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   events.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaj <mbaj@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 00:28:28 by mbaj              #+#    #+#             */
/*   Updated: 2024/08/12 01:41:01 by mbaj             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	move_player(t_game *game, short x_off, short y_off, char key)
{
	int new_row;
	int new_col;

	new_row = game->p_pos[0] + x_off;
	new_col = game->p_pos[1] + y_off;
	if (game->map[new_row][new_col] == '1')
		return ;
	if (new_row == game->e_pos[0] && new_col == game->e_pos[1])
	{
		if (is_all_collected(game->map))
		{
			close_game(game);
			game->game_counter++;
			return ;
		}
	}
	if (game->p_pos[0] == game->e_pos[0] && game->p_pos[1] == game->e_pos[1])
		game->map[game->p_pos[0]][game->p_pos[1]] = 'E';
	else
		game->map[game->p_pos[0]][game->p_pos[1]] = '0';
	game->map[new_row][new_col] = 'P';
	game->p_pos[0] = new_row;
	game->p_pos[1] = new_col;
	fill_textures(*game, key);
	game->game_counter++;
}