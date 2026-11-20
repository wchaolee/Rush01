#include	"rush01.h"

int	check_input(char *str)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
	{
		if (i % 2 == 0 && (str[i] < '1' || str[i] > '4'))
			return (0);
		if (i % 2 == 1 && str[i] != ' ')
			return (0);
		i++;
	}
	return (i == 31);
}

void	parse_clues(char *str, int *clues)
{
	int	i;

	i = 0;
	while (i < 16)
	{
		clues[i] = str[i *2] - '0';
		i++;
	}
}