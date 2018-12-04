#include <algorithm>
#include <array>
#include <iostream>
#include <iterator>
#include <sstream>
#include <string>
#include <cstddef>
#ifndef PIECE_HPP
#define PIECE_HPP

namespace dauphine
{

enum class color    //:: pour y accéder
{
	white,
	black
};


class piece
{
public:

	virtual ~piece();

	piece(const piece&)=delete;
	piece& operator=(const piece&)=delete;
	piece(piece&&)=delete;
	piece& operator=(piece&&)=delete;




	// Semantique d'entité

	void set_position(std::size_t row,std::size_t col);
	virtual bool can_move(std::size_t row,std::size_t col) const=0;

protected:      //protected car m_row et m_col vont être rappelé par sous classe, pièce pas en public pck le constructeur jamais instance dans piece, explicit est pr constructeur
	
	piece(std::size_t row, std::size_t col, color c)	

	std::size_t m_row;
	std::size_t m_col;    // size_t: echiquier vecteurs de vecteurs, on access éléments dans vecteurs par size_t
	std::size_t m_color;

}


/*  class pain: comment on initialise: même constructeur, même signature  override: pr securite, si change la méthode au dessus va dire quoi prend pas la même  */



#endif

}

