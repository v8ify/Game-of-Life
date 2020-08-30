#pragma once

class Cell
{
public:
	Cell() = default;
	Cell(int state);

	void regenerate();
	void kill();
	int get_old();
	int get_new();
private:
	int old_state = 0;
	int new_state = 0;
};
