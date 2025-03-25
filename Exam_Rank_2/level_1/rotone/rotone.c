#include <unistd.h>

void	putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			if ((argv[1][i] >= 'a' && argv[1][i] <= 'z') || (argv[1][i] >= 'A' && argv[1][i] <= 'Z'))
				putchar(argv[1][i] + 1);
			else if (argv[1][i] == 'z' && argv[1][i] == 'Z')
				putchar(argv[1][i] - 25);
			else
				putchar(argv[1][i]);
			i++;
		}
	}
	putchar('\n');
	return (0);
}
