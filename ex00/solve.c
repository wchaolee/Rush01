#include "rush01.h"

int	solve(int grid[4][4], int *clues, int pos)
{
	int n;

	if (pos == 16)
		return (check_clues(grid, clues));
	n = 1;
	while (n <= 4)
	{
		if (is_valid(grid, pos, n))
		{
			grid[pos / 4][pos % 4] = n;
			if (solve(grid, clues, pos + 1))
				return (1);
			grid[pos / 4][pos % 4] = 0;
		}
		n++;
	}
	return (0);
}