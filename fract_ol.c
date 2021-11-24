#include "fract_ol.h"

void	start(t_vars vars)
{
	vars.mlx = mlx_init();
	vars.win = mlx_new_window(vars.mlx, (int)WIDTH, (int)HEIGHT, TITLE);
	mlx_key_hook(vars.win, hook, &vars);
	mlx_hook(vars.win, 17, 0, close_mlx_win, &vars);
	mlx_loop(vars.mlx);
}

int	check_args(char *fract)
{
	if (strncmp(fract, "Mandelbrot", 10) == 0)
		return (0);
	else if (strncmp(fract, "Julia", 10) == 0)
		return (1);
	return (-1);
}

int	main(int argc, char **argv)
{
	t_vars	vars;
	int		tmp;

	if (argc > 2)
		return (0);
	else if (argc == 2)
	{
		tmp = check_args(argv[1]);
		if (tmp < 0)
			ft_printf("Vous ne pouvez utiliser que les arguments suivants :\n1: Mandelbrot\n2: Julia\n\nMerci de reesayer");
		else
		{
			vars.fract_name = tmp;
			start(vars);
		}
	}
	else
		ft_printf("Vous ne pouvez utiliser que les arguments suivants :\n1: Mandelbrot\n2: Julia\n\nMerci de reesayer");
	return (0);
}
