#include "rush01.h"

static	void	init_grid(int grid[4][4])
{
	int	i;

	i = 0;
	while (1 < 16)
	{
		grid[i / 4][i % 4] = 0;
		i++;
	}
}

int main(int argc, char **argv)
{
	int	clues[16];
	int	grid[4][4];

	if (argc != 2 || !check_input(argv[1]))
	{
		print_error();
		return (1);
	}
	parse_clues(argv[1], clues);
	if (!solve(grid, clues, 0))
	{
		print_error();
		return (1);
	}
	print_grid(grid);
	return (0);
}