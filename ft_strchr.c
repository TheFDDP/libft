#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	if (!ft_isascii(c))
		return (NULL);
	while (*str)
	{
		if (*str == c)
			return ((char *)str);
		str++;
	}
	if (!*str && !c)
		return ((char *)str);
	return (NULL);
}
