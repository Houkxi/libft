#include <stdio.h>
#include <string.h>
#include "proto_ft.h"

int		main(int argv, char **argc)
{
	int i = 0;

	if (argv >= 2)
	{
		if (ft_strcmp(argc[1], "mem") == 0)
		{}
		if (ft_strcmp(argc[1], "str") == 0)
		{}
		if (ft_strcmp(argc[1], "is") == 0)
		{
			if (ft_atoi(argc[2]) > 0)
			{
				i = ft_atoi(argc[2]);
				printf("Symbl Ascii = %c\n", i);
				printf("ft_alpha = %d\n", ft_isalpha(i));
				printf("Org = %d\n", isalpha(i));
				printf("ft_digit = %d\n", ft_isdigit(i));
				printf("Org = %d\n", isdigit(i));
				printf("ft_alnum = %d\n", ft_isalnum(i));
				printf("Org = %d\n", isalnum(i));
				printf("ft_ascii = %d\n", ft_isascii(i));
				printf("Org = %d\n", isascii(i));
				printf("ft_print = %d\n", ft_isprint(i));
				printf("Org = %d\n", isprint(i));
			}
		}
		if (ft_strcmp(argc[1], "autre") == 0)
		{}
		else
		{
			printf("Wrong keyWords\n");
			return (0);
		}

	}
	if (argv == 1)
	{
		printf("Too few arguments.\n");
		return (0);
	}
}
