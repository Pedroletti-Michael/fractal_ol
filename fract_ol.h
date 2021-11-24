#ifndef FRACT_OL_H
# define FRACT_OL_H
# include <unistd.h>
# include <string.h>
# include <stdlib.h>
# include <stdarg.h>
# include <limits.h>
# include <stdio.h>

/**
 * Type used to define complexe number
**/
typedef struct	s_cnb
{
	double	real;
	double	img;
}			t_cnb;

int	ft_putstr(char *s);
#endif
