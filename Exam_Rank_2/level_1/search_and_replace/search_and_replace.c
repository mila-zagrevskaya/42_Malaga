#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	search_and_replace(char *str, char *search, char *replace)
{
	while (*str)
	{
		if (*str == *search)
			ft_putchar(*replace);
		else
			ft_putchar(*str);
		str++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 4)
		search_and_replace(argv[1], argv[2], argv[3]);
	ft_putchar('\n');
	return (0);
}
