#ifndef FRACT_OL_H
# define FRACT_OL_H
# include <unistd.h>
# include <string.h>
# include <stdlib.h>
# include <stdarg.h>
# include <limits.h>
# include <stdio.h>
# include "mlx/mlx.h"
# include "libft/libft.h"
# include "ft_printf/ft_printf.h"
# include "key_event.h"

# define WIDTH 1280
# define HEIGHT 800
# define TITLE "Fractol"
enum fract {Mandelbrot, Julia};

/**
 * Type used to stock information about mlx windows etc...
 *
**/
typedef struct	s_vars {
	void		*mlx;
	void		*win;
	enum fract	fract_name;
}				t_vars;

/**
 * Type used to define complexe number
**/
typedef struct	s_cnb
{
	double	real;
	double	img;
}			t_cnb;

int		ft_putstr(char *s);
int		close_mlx_win(t_vars *vars);
int		hook(int keycode, t_vars *vars);
#endif
