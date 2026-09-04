
#include "libc.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && 'Z' >= c)
		return (c + 'a' - 'A');
	return (c);
}

