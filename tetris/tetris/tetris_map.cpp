#include "stdafx.h"
#include "tetris_map.h"


tetris_map::tetris_map()
{
	map_.resize(row_max);
	for (int row = 0; row < row_max; ++row)
	{
		map_[row].resize(col_max);
	}
}

tetris_map::~tetris_map()
{
}
