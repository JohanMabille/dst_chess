#include <algorithm>
#include <array>
#include <iostream>
#include <iterator>
#include <sstream>
#include <string>
#include "piece.hpp"

namespace dauphine
{

	piece::piece(std::size_t row, std::size_t col, color c)
	: m_row(row), m_col(col),m_color(c){}

}