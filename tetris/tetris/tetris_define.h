#pragma once

enum map_size_info
{
	col_max = 10,
	row_max = 20
};

class tetris_cube;
typedef vector<tetris_cube> map_row_t;
typedef vector<map_row_t>   map_t;

struct position_t
{
	int row;
	int col;
};