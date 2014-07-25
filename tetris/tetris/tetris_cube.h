#pragma once

class tetris_cube
{
public:
	tetris_cube();
	~tetris_cube();

public:
	void set_color(int in_color) { color_ = in_color;  }

	void set_position(const position_t& in_position) { position_ = in_position;  }

public:
	int color() const { return color_; }

	const position_t& position() const { return position_;  }

private:
	int        color_;
	position_t position_;
};


