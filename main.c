#include <stdio.h>
#include <string.h>
#include "../includes/proto_ft.h"
#include "../includes/tests.h"


int		main(int argv, char **argc)
{
	int i = 0;
	int mbool = 0;

	if (argv >= 2)
	{
		if (ft_strcmp(argc[1], "mem") == 0)
		{}
		if (ft_strcmp(argc[1], "str") == 0)
		{
			mbool = 1;
		/*	if (ft_atoi(argc[2]) == -2)
			{
				printf("ft_strcpy = %s\n", ft_strcpy(argc[3], argc[4]));
				printf("Org = %s\n", strcpy(argc[5], argc[6]));
				printf("ft_strncpy = %s\n", ft_strncpy(argc[3], argc[6], 5));
				printf("Org = %s\n", strncpy(argc[5], argc[4], 5));
			}
			printf("ft_strlen : \n%zu\n", ft_strlen(argc[2]));
			printf("%zu\n", strlen(argc[2]));
			printf("ft_strcmp : \n%d\n", ft_strcmp(argc[2], argc[3]));
			printf("%d\n", strcmp(argc[2], argc[3]));
			printf("ft_strncmp : \n%d\n", ft_strncmp(argc[2], argc[3], 5));
			printf("%d\n", strncmp(argc[2], argc[3], 5));
			printf("ft_strdup : \n%s\n", ft_strdup(argc[4]));
			printf("%s\n", strdup(argc[4]));
			printf("ft_strstr : \n%s\n", ft_strstr(argc[2], argc[3]));
			printf("%s\n", strstr(argc[2], argc[3]));*/
			printf("ft_strnstr : \n%s\n", ft_strnstr(argc[2], argc[3], 4));
			printf("%s\n", strnstr(argc[2], argc[3], 4));
		/*	printf("ft_strchr : \n%s\n", ft_strchr(argc[2], ft_atoi(argc[3])));
			printf("%s\n", strchr(argc[2], ft_atoi(argc[3])));
			printf("ft_strrchr : \n%s\n", ft_strrchr(argc[2], ft_atoi(argc[3])));
			printf("%s\n", strrchr(argc[2], ft_atoi(argc[3])));*/
			printf("\nSTRLCAT\n");
			strlcat_tests();
			//printf("%s\n", map_test(argc[2]));
			/*printf("%s\n", ft_strcat(argc[2], argc[3]));
			printf("%s\n", strcat(argc[2], argc[3]));*/



		}
		if (ft_strcmp(argc[1], "is") == 0)
		{
			mbool = 1;
			if (ft_atoi(argc[2]) > 0)
			{
				i = ft_atoi(argc[2]);
				printf("Symbl Ascii = %c\n", i);
				printf("ft_alpha : \n%d\n", ft_isalpha(i));
				printf("%d\n", isalpha(i));
				printf("ft_digit : \n%d\n", ft_isdigit(i));
				printf("%d\n", isdigit(i));
				printf("ft_alnum : \n%d\n", ft_isalnum(i));
				printf("%d\n", isalnum(i));
				printf("ft_ascii : \n%d\n", ft_isascii(i));
				printf("%d\n", isascii(i));
				printf("ft_print : \n%d\n", ft_isprint(i));
				printf("%d\n", isprint(i));
			}
		}
		if (ft_strcmp(argc[1], "autre") == 0)
		{
			mbool = 1;
			printf("1 = %d\n", ft_atoi(argc[2]));
			printf("2 = %d\n", atoi(argc[2]));
			ft_putnbr(ft_atoi(argc[2]));
		}
		else if (mbool == 0)
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
