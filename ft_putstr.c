#include "libc.h"

int	ft_putstr(char *str)
{
	int	j;

	j = 0;
	if (!str)
		str = "(null)";
	while (str[j])
	{
		ft_putchar(str[j]);
		j++;
	}
	return (j);
}