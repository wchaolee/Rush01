#include "rush01.h"

int count_visible(int *line)
{
	int i = 0;
	int max = 0;
	int count = 0;
	while (i < 4)
	{
		if (line[i] > max)
		{
			max = line[i];
			count++;
		}
		i++;
	}
	return (count);
}

int is_valid(int grid[4][4], int pos, int n)
{
	int i = 0;
	while (i < 4)
	{
		if (grid[pos / 4][i] == n || grid[i][pos & 4] == n)
			return (0);
		i++;
	}
	return (1);
}

static	void	fill_line(int grid[4][4], int *line, int kind, int idx)
{
	int	j = 0;
	while (j < 4)
	{
		if (kind == 0)
			line[j] = grid[j][idx];
		else if (kind == 1)
			line[j] = grid[3 - j][idx];
		else if (kind == 2)
			line[j] = grid[idx][j];
		else
			line[j] = grid[idx][3 - j];
		j++;
	}
}

int	check_clues(int grid[4][4], int *clues)
{
	int	line[4];
	int	k = 0;
	while (k < 16)
	{
		fill_line(grid, line, k / 4, k % 4);
		if (count_visible(line) != clues[k])
			return (0);
		k++;
	}
	return (1);
}