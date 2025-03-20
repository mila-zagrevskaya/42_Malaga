#include <unistd.h>

void	ft_write_number(int num)
{
	char	c;

	if (num >= 10)
		ft_write_number(num / 10);
	c = num % 10 + '0';
	write(1, &c, 1);
}

int	main()
{
	int	i;

	i = 1;
	while (i <= 100)
	{
		if (i % 15 == 0)
			write(1, "fizzbuzz", 8);
		else if (i % 5 == 0)
			write(1, "buzz", 4);
		else if (i % 3 == 0)
			write(1, "fizz", 4);
		else
			ft_write_number(i);
		i++;
		write(1, "\n", 1);
	}
	return (0);
}
