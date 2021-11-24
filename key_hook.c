#include "fract_ol.h"

int	close_mlx_win(t_vars *vars)
{
	mlx_destroy_window(vars->mlx, vars->win);
	exit(0);
}

int	hook(int keycode, t_vars *vars)
{
	if (keycode == ESC)
		close_mlx_win(vars);
	return (0);
}
