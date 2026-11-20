#ifndef RUSH01_H
# define RUSH01_H

#include <unistd.h>

int	check_input(char *str);
void	parse_clues(char *str, int *clues);
int	count_visible(int *line);
int	is_valid(int grid[4][4], int pos, int n);
int	check_clues(int grid[4][4], int *clues);
int	solve(int grid[4][4], int *clues, int pos);
void	print_grid(int grid[4][4]);
void	print_error(void);

#endif